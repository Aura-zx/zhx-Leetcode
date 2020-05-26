#! /usr/bin/env node

const { readdirSync, lstatSync, readFileSync, writeFile } = require('fs');
const { join, relative, extname, parse } = require('path');
let parser = require('xml2json');

const root = process.cwd();
const fullpath = join(root, 'label');

const excludes = [ '.git', '.gitignore' ];

console.log(join(root, 'label'));

function findAllFileNames(root) {
	let fnames = [];
	const findName = (path) => {
		let names = readdirSync(path);
		names.forEach((name) => {
			let fpath = join(path, name);
			if (excludes.includes(name)) {
				return;
			} else if (lstatSync(fpath).isDirectory()) {
				findName(fpath);
			} else {
				fnames.push(fpath);
			}
		});
	};
	findName(root);
	return fnames;
}

const fnames = findAllFileNames(fullpath);
// console.log(readFileSync(fnames[0], 'utf8'));
// const relativeNames = fnames.map((fname) => relative(join(root, 'label'), fname));

fnames.filter((name) => extname(name) === '.xml').forEach((fpath) => {
	// const filename = relative(fullpath, name);
	let fname = parse(fpath).name;
	let json = parser.toJson(readFileSync(fpath));
	writeFile('./label-json/' + fname + '.json', json, () => {});
});
