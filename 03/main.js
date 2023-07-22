function add1(v) { return v+1; }

function main() {
        let v = 1;
        while(v< 0xffffffff) {
                v = add1(v);
        }
        console.info(v);
}
main();