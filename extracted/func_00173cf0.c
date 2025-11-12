void func_00173cf0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00173cf0: addiu $sp, $sp, -0x20
    func_00169b10();  // 0x169af0                                // 0x00173d04: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00173d0c: lui $a1, 0xff00
    a1 = a1 | 0x137;                                            // 0x00173d18: ori $a1, $a1, 0x137
    a2 = 0xc;                                                   // 0x00173d1c: addiu $a2, $zero, 0xc
    if (v0 == 0) goto label_0x173d40;                           // 0x00173d20: beqz $v0, 0x173d40
    return func_00169940();  // Tail call                        // 0x00173d34: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00173d38: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00173d3c: nop 
label_0x173d40:
    *(uint32_t*)((s1) + 0x960) = 0;                             // 0x00173d40: sw $zero, 0x960($s1)
    a1 = 6;                                                     // 0x00173d4c: addiu $a1, $zero, 6
    return func_00177908();  // Tail call                        // 0x00173d58: j 0x1778a0
    sp = sp + 0x20;                                             // 0x00173d5c: addiu $sp, $sp, 0x20
    sp = sp + -0x20;                                            // 0x00173d60: addiu $sp, $sp, -0x20
    func_00169b10();  // 0x169af0                                // 0x00173d74: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00173d7c: lui $a1, 0xff00
    if (v0 == 0) goto label_0x173da0;                           // 0x00173d80: beqz $v0, 0x173da0
    a1 = a1 | 0x139;                                            // 0x00173d8c: ori $a1, $a1, 0x139
    return func_00169940();  // Tail call                        // 0x00173d98: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00173d9c: addiu $sp, $sp, 0x20
label_0x173da0:
    return func_00166a70();  // Tail call                        // 0x00173db4: j 0x1669c8
    sp = sp + 0x20;                                             // 0x00173db8: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00173dbc: nop 
    *(uint32_t*)((a0) + 0x10) = 0;                              // 0x00173dc0: sw $zero, 0x10($a0)
    *(uint32_t*)(a0) = 0;                                       // 0x00173dc4: sw $zero, 0($a0)
    *(uint32_t*)((a0) + 4) = 0;                                 // 0x00173dc8: sw $zero, 4($a0)
    *(uint32_t*)((a0) + 8) = 0;                                 // 0x00173dcc: sw $zero, 8($a0)
    return;                                                     // 0x00173dd0: jr $ra
    *(uint32_t*)((a0) + 0xc) = 0;                               // 0x00173dd4: sw $zero, 0xc($a0)
}