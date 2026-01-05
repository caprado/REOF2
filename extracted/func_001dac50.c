void func_001dac50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = 0x24 << 16;                                            // 0x001dac50: lui $a0, 0x24
    return func_001daf80();  // Tail call                        // 0x001dac58: j 0x1daef0
    a0 = &str_00247958;  // "start"                             // 0x001dac5c: addiu $a0, $a0, 0x7958
    goto label_0x1daca0;                                        // 0x001dac60: j 0x1daca0
    /* nop */                                                   // 0x001dac68: nop 
    /* nop */                                                   // 0x001dac6c: nop 
    goto label_0x1daca0;                                        // 0x001dac70: j 0x1daca0
    a0 = 1;                                                     // 0x001dac74: addiu $a0, $zero, 1
    /* nop */                                                   // 0x001dac78: nop 
    /* nop */                                                   // 0x001dac7c: nop 
    goto label_0x1daca0;                                        // 0x001dac80: j 0x1daca0
    a0 = 2;                                                     // 0x001dac84: addiu $a0, $zero, 2
    /* nop */                                                   // 0x001dac88: nop 
    /* nop */                                                   // 0x001dac8c: nop 
    goto label_0x1daca0;                                        // 0x001dac90: j 0x1daca0
    a0 = 3;                                                     // 0x001dac94: addiu $a0, $zero, 3
    /* nop */                                                   // 0x001dac98: nop 
    /* nop */                                                   // 0x001dac9c: nop 
label_0x1daca0:
    sp = sp + -0xa0;                                            // 0x001daca0: addiu $sp, $sp, -0xa0
    v0 = 3;                                                     // 0x001daca4: addiu $v0, $zero, 3
    if (a0 == v0) goto label_0x1dad18;                          // 0x001dacac: beq $a0, $v0, 0x1dad18
    v0 = 2;                                                     // 0x001dacb4: addiu $v0, $zero, 2
    if (a0 == v0) goto label_0x1dad04;                          // 0x001dacb8: beq $a0, $v0, 0x1dad04
    a1 = 0x24 << 16;                                            // 0x001dacbc: lui $a1, 0x24
    v0 = 1;                                                     // 0x001dacc0: addiu $v0, $zero, 1
    if (a0 == v0) goto label_0x1dacf0;                          // 0x001dacc4: beq $a0, $v0, 0x1dacf0
    a1 = 0x24 << 16;                                            // 0x001dacc8: lui $a1, 0x24
    if (a0 == 0) goto label_0x1dacdc;                           // 0x001daccc: beqz $a0, 0x1dacdc
    a1 = 0x24 << 16;                                            // 0x001dacd0: lui $a1, 0x24
    goto label_0x1dad30;                                        // 0x001dacd4: b 0x1dad30
    a0 = sp + 0x20;                                             // 0x001dacd8: addiu $a0, $sp, 0x20
label_0x1dacdc:
    a0 = sp + 0x20;                                             // 0x001dacdc: addiu $a0, $sp, 0x20
    func_0010a4d8();  // 10a4d8                                // 0x001dace0: jal 0x10a4d8
    a1 = &str_00247960;  // "download"                          // 0x001dace4: addiu $a1, $a1, 0x7960
    goto label_0x1dad2c;                                        // 0x001dace8: b 0x1dad2c
    s0 = 0x2000;                                                // 0x001dacec: addiu $s0, $zero, 0x2000
label_0x1dacf0:
    a0 = sp + 0x20;                                             // 0x001dacf0: addiu $a0, $sp, 0x20
    func_0010a4d8();  // 10a4d8                                // 0x001dacf4: jal 0x10a4d8
    a1 = a1 + 0x7968;                                           // 0x001dacf8: addiu $a1, $a1, 0x7968
    goto label_0x1dad2c;                                        // 0x001dacfc: b 0x1dad2c
    s0 = 0x2500;                                                // 0x001dad00: addiu $s0, $zero, 0x2500
label_0x1dad04:
    a0 = sp + 0x20;                                             // 0x001dad04: addiu $a0, $sp, 0x20
    func_0010a4d8();  // 10a4d8                                // 0x001dad08: jal 0x10a4d8
    a1 = a1 + 0x7978;                                           // 0x001dad0c: addiu $a1, $a1, 0x7978
    goto label_0x1dad2c;                                        // 0x001dad10: b 0x1dad2c
    s0 = 0x2500;                                                // 0x001dad14: addiu $s0, $zero, 0x2500
label_0x1dad18:
    a1 = 0x24 << 16;                                            // 0x001dad18: lui $a1, 0x24
    a0 = sp + 0x20;                                             // 0x001dad1c: addiu $a0, $sp, 0x20
    func_0010a4d8();  // 10a4d8                                // 0x001dad20: jal 0x10a4d8
    a1 = a1 + 0x7980;                                           // 0x001dad24: addiu $a1, $a1, 0x7980
    s0 = 0x2500;                                                // 0x001dad28: addiu $s0, $zero, 0x2500
label_0x1dad2c:
    a0 = sp + 0x20;                                             // 0x001dad2c: addiu $a0, $sp, 0x20
label_0x1dad30:
    func_001daef0();  // 1daef0                                // 0x001dad30: jal 0x1daef0
    a1 = 0xc;                                                   // 0x001dad34: addiu $a1, $zero, 0xc
    a0 = 1;                                                     // 0x001dad3c: addiu $a0, $zero, 1
    a1 = 4;                                                     // 0x001dad40: addiu $a1, $zero, 4
    thunk_func_001ac9a0();  // 1ac9a0                          // 0x001dad48: jal 0x1ac9a0
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001dad54: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001dad58: jr $ra
    sp = sp + 0xa0;                                             // 0x001dad5c: addiu $sp, $sp, 0xa0
}