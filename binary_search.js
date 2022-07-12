function binarySearch(arr, i) {

    let mid = Math.floor(arr.length / 2); // find midd element

    if (arr[mid] === i) {
        return arr[mid]; // check if mid element match
    }
    else if (arr[mid] < i && arr.length > 1) {
        return binarySearch(arr.splice(mid, Number.MAX_VALUE), i);
    }
    else if (arr[mid] > i && arr.length > 1) {
        return binarySearch(arr.splice(0, mid), i);
    }
    else {
        console.log('not found', i);
        return -1;
    }
}
binarySearch([45,7,8,9,1,3],11)