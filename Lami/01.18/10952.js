const fs = require('fs');
const filePath = process.platform === 'linux' ? '/dev/stdin' : './input.txt';
let input = fs.readFileSync(filePath).toString().split('\n');

function solution() {
  for (let i = 0; i < input.length - 1; i++) {
    let numbers = input[i].split(' ');
    if (!(numbers[0] === '0' && numbers[1] === '0')) {
      console.log(Number(numbers[0]) + Number(numbers[1]));
    }
  }
}

solution();
