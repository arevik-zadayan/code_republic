function merge(arr1, arr2, arr3) {

    let index1 = 0, index2 = 0;

    while (index1 < arr1.length && index2 < arr2.length) {
        if (sort(arr1[index1], arr2[index2]) > 0) {
            arr3.push(arr2[index2++]);
        } else {
            arr3.push(arr1[index1++]);
        }
    }

    if (index2 < arr2.length) {
        arr3 = arr3.concat(arr2.slice(index2));
    }
    else {
        arr3 = arr3.concat(arr1.slice(index1));
    }

    return arr3;
}

function sort(a, b) {
    return a - b;
}

console.log(merge([1,2,8,9],[4,5,11],[]));