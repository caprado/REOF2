void func_0016fba0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0016fba0: addiu $sp, $sp, -0x10
    a1 = 0xff00 << 16;                                          // 0x0016fba4: lui $a1, 0xff00
    a1 = a1 | 0xf0d;                                            // 0x0016fbac: ori $a1, $a1, 0xf0d
    return func_00169940();  // Tail call                        // 0x0016fbb4: j 0x1698d0
    sp = sp + 0x10;                                             // 0x0016fbb8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016fbbc: nop 
    sp = sp + -0x10;                                            // 0x0016fbc0: addiu $sp, $sp, -0x10
    a1 = 0xff00 << 16;                                          // 0x0016fbc4: lui $a1, 0xff00
    a1 = a1 | 0xf0d;                                            // 0x0016fbcc: ori $a1, $a1, 0xf0d
    return func_00169940();  // Tail call                        // 0x0016fbd4: j 0x1698d0
    sp = sp + 0x10;                                             // 0x0016fbd8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016fbdc: nop 
    sp = sp + -0x30;                                            // 0x0016fbe0: addiu $sp, $sp, -0x30
    func_00170250();  // 170250                                // 0x0016fbfc: jal 0x170250
    s2 = s0 + 0xcc0;                                            // 0x0016fc00: addiu $s2, $s0, 0xcc0
    v1 = -1;                                                    // 0x0016fc04: addiu $v1, $zero, -1
    if (v0 != v1) goto label_0x16fc20;                          // 0x0016fc0c: bne $v0, $v1, 0x16fc20
    *(uint32_t*)(s1) = 0;                                       // 0x0016fc14: sw $zero, 0($s1)
    goto label_0x16fc68;                                        // 0x0016fc18: b 0x16fc68
label_0x16fc20:
    func_00170420();  // 170420                                // 0x0016fc20: jal 0x170420
    /* nop */                                                   // 0x0016fc24: nop 
    if (v1 != 0) goto label_0x16fc48;                           // 0x0016fc34: bnez $v1, 0x16fc48
    goto label_0x16fc68;                                        // 0x0016fc3c: b 0x16fc68
    *(uint32_t*)(s1) = 0;                                       // 0x0016fc40: sw $zero, 0($s1)
    /* nop */                                                   // 0x0016fc44: nop 
label_0x16fc48:
    func_0016fc80();  // 16fc80                                // 0x0016fc48: jal 0x16fc80
    /* nop */                                                   // 0x0016fc4c: nop 
    v1 = *(int32_t*)(s1);                                       // 0x0016fc54: lw $v1, 0($s1)
    a0 = *(int32_t*)((v1) + 0x14);                              // 0x0016fc58: lw $a0, 0x14($v1)
    *(uint32_t*)((s2) + 0x238) = a0;                            // 0x0016fc5c: sw $a0, 0x238($s2)
    a1 = *(int32_t*)((v1) + 0x18);                              // 0x0016fc60: lw $a1, 0x18($v1)
    *(uint32_t*)((s2) + 0x23c) = a1;                            // 0x0016fc64: sw $a1, 0x23c($s2)
label_0x16fc68:
    return;                                                     // 0x0016fc78: jr $ra
    sp = sp + 0x30;                                             // 0x0016fc7c: addiu $sp, $sp, 0x30
}