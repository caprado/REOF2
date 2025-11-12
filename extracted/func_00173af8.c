void func_00173af8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00173af8: addiu $sp, $sp, -0x20
    func_00169b10();  // 0x169af0                                // 0x00173b0c: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00173b14: lui $a1, 0xff00
    a1 = a1 | 0x134;                                            // 0x00173b20: ori $a1, $a1, 0x134
    a2 = 9;                                                     // 0x00173b24: addiu $a2, $zero, 9
    if (v0 == 0) goto label_0x173b48;                           // 0x00173b28: beqz $v0, 0x173b48
    return func_00169940();  // Tail call                        // 0x00173b3c: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00173b40: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00173b44: nop 
label_0x173b48:
    return func_00177908();  // Tail call                        // 0x00173b5c: j 0x1778a0
    sp = sp + 0x20;                                             // 0x00173b60: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00173b64: nop 
    sp = sp + -0x20;                                            // 0x00173b68: addiu $sp, $sp, -0x20
    func_00169b10();  // 0x169af0                                // 0x00173b84: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00173b8c: lui $a1, 0xff00
    a1 = a1 | 0x135;                                            // 0x00173b9c: ori $a1, $a1, 0x135
    if (v0 == 0) goto label_0x173bc8;                           // 0x00173ba0: beqz $v0, 0x173bc8
    a2 = 0xa;                                                   // 0x00173ba4: addiu $a2, $zero, 0xa
    return func_00169940();  // Tail call                        // 0x00173bbc: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00173bc0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00173bc4: nop 
label_0x173bc8:
    return func_00177908();  // Tail call                        // 0x00173bdc: j 0x1778a0
    sp = sp + 0x20;                                             // 0x00173be0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00173be4: nop 
    sp = sp + -0x10;                                            // 0x00173be8: addiu $sp, $sp, -0x10
    func_00169b10();  // 0x169af0                                // 0x00173bf4: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00173bfc: lui $a1, 0xff00
    a2 = 1;                                                     // 0x00173c04: addiu $a2, $zero, 1
    if (v0 == 0) goto label_0x173c28;                           // 0x00173c08: beqz $v0, 0x173c28
    a1 = a1 | 0x135;                                            // 0x00173c0c: ori $a1, $a1, 0x135
    return func_00169940();  // Tail call                        // 0x00173c1c: j 0x1698d0
    sp = sp + 0x10;                                             // 0x00173c20: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00173c24: nop 
label_0x173c28:
    func_001679c0();  // 0x1679a0                                // 0x00173c28: jal 0x1679a0
    a1 = *(int32_t*)((s0) + 0x1ab4);                            // 0x00173c2c: lw $a1, 0x1ab4($s0)
    v0 = 1;                                                     // 0x00173c30: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 0x44) = v0;                             // 0x00173c34: sw $v0, 0x44($s0)
    return;                                                     // 0x00173c44: jr $ra
    sp = sp + 0x10;                                             // 0x00173c48: addiu $sp, $sp, 0x10
}