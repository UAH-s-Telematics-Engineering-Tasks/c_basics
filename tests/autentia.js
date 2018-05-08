const text = "Autentia mola mucho";
let words = [];
let word = '';

for (let letter of text) {
 if (letter != ' ') {
     word += letter;
 } else {
     words.push(word);
     word = '';
 }
}
words.push(word);
const solution = words.reverse().join(' ');
console.log(solution);
