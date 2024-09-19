/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    let arr1 = []
    arr.forEach((value, index) => {
    arr1[index] = fn(value, index);
  });
  return arr1;

};