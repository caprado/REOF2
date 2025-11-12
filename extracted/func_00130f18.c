void func_00130f18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00130f18: addiu $sp, $sp, -0x10
    if (s0 == 0) goto label_0x130f58;                           // 0x00130f24: beqz $s0, 0x130f58
    a0 = str_002236d0;  // "niop0=%4d, niop2=%4d, sum=%4d\n"    // 0x00130f2c: lw $a0, 8($s0)
    a1 = g_002236d4;  // Global at 0x002236d4                   // 0x00130f30: lw $a1, 0xc($s0)
    a2 = g_002236d8;  // Global at 0x002236d8                   // 0x00130f34: lw $a2, 0x10($s0)
    func_0013aad0();  // 0x13aab0                                // 0x00130f38: jal 0x13aab0
    a3 = g_002236cc;  // Global at 0x002236cc                   // 0x00130f3c: lw $a3, 4($s0)
    a0 = g_002236c8;  // Global at 0x002236c8                   // 0x00130f40: lw $a0, 0($s0)
    return func_0013aba8();  // Tail call                        // 0x00130f4c: j 0x13aad0
    sp = sp + 0x10;                                             // 0x00130f50: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00130f54: nop 
label_0x130f58:
    func_0013aad0();  // 0x13aab0                                // 0x00130f60: jal 0x13aab0
    return func_0013aba8();  // Tail call                        // 0x00130f74: j 0x13aad0
    sp = sp + 0x10;                                             // 0x00130f78: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00130f7c: nop 
    sp = sp + -0x10;                                            // 0x00130f80: addiu $sp, $sp, -0x10
    return func_0013aab0();  // Tail call                        // 0x00130f8c: j 0x13aa88
    sp = sp + 0x10;                                             // 0x00130f90: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00130f94: nop 
    sp = sp + -0x10;                                            // 0x00130f98: addiu $sp, $sp, -0x10
    return func_00139d18();  // Tail call                       // 0x00130fa4: j 0x139d18
    sp = sp + 0x10;                                             // 0x00130fa8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00130fac: nop 
    sp = sp + -0x10;                                            // 0x00130fb0: addiu $sp, $sp, -0x10
    return func_00139d38();  // Tail call                       // 0x00130fbc: j 0x139d38
    sp = sp + 0x10;                                             // 0x00130fc0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00130fc4: nop 
    sp = sp + -0x10;                                            // 0x00130fc8: addiu $sp, $sp, -0x10
    return func_0013abc0();  // Tail call                        // 0x00130fd4: j 0x13aba8
    sp = sp + 0x10;                                             // 0x00130fd8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00130fdc: nop 
    sp = sp + -0x10;                                            // 0x00130fe0: addiu $sp, $sp, -0x10
    return func_00127de8();  // Tail call                        // 0x00130ff0: j 0x127d90
    sp = sp + 0x10;                                             // 0x00130ff4: addiu $sp, $sp, 0x10
    sp = sp + -0x20;                                            // 0x00130ff8: addiu $sp, $sp, -0x20
    v0 = 0x13 << 16;                                            // 0x00130ffc: lui $v0, 0x13
    s0 = 0x22 << 16;                                            // 0x00131004: lui $s0, 0x22
    func_00136768();  // 0x136740                                // 0x00131018: jal 0x136740
    a0 = v0 + 0xfe0;                                            // 0x0013101c: addiu $a0, $v0, 0xfe0
    s0 = s0 + 0x36c8;                                           // 0x00131020: addiu $s0, $s0, 0x36c8
    a1 = 0x14 << 16;                                            // 0x00131024: lui $a1, 0x14
    a1 = a1 + -0x53e0;                                          // 0x00131028: addiu $a1, $a1, -0x53e0
    func_00135148();  // 0x1350b8                                // 0x00131030: jal 0x1350b8
    func_001354b8();  // 0x1353f0                                // 0x00131038: jal 0x1353f0
    if (s1 == 0) goto label_0x1310b8;                           // 0x00131040: beqz $s1, 0x1310b8
    func_0013c6d8();  // 0x13c6a8                                // 0x00131048: jal 0x13c6a8
    a0 = *(int32_t*)((s1) + 4);                                 // 0x0013104c: lw $a0, 4($s1)
    func_0013c768();  // 0x13c6d8                                // 0x00131050: jal 0x13c6d8
    a0 = *(int32_t*)(s1);                                       // 0x00131054: lw $a0, 0($s1)
    v0 = *(int32_t*)((s1) + 8);                                 // 0x00131058: lw $v0, 8($s1)
    if (v0 != 0) goto label_0x131078;                           // 0x0013105c: bnez $v0, 0x131078
    a0 = 1;                                                     // 0x00131060: addiu $a0, $zero, 1
    func_0013ac58();  // 0x13abc0                                // 0x00131064: jal 0x13abc0
    goto label_0x131084;                                        // 0x0013106c: b 0x131084
    v0 = *(int32_t*)((s1) + 0xc);                               // 0x00131070: lw $v0, 0xc($s1)
    /* nop */                                                   // 0x00131074: nop 
label_0x131078:
    func_0013ac58();  // 0x13abc0                                // 0x00131078: jal 0x13abc0
    /* nop */                                                   // 0x0013107c: nop 
    v0 = *(int32_t*)((s1) + 0xc);                               // 0x00131080: lw $v0, 0xc($s1)
label_0x131084:
    if (v0 != 0) goto label_0x1310a0;                           // 0x00131084: bnez $v0, 0x1310a0
    return func_0013abf0();  // Tail call                       // 0x00131098: j 0x13abf0
    sp = sp + 0x20;                                             // 0x0013109c: addiu $sp, $sp, 0x20
label_0x1310a0:
    a0 = 1;                                                     // 0x001310a0: addiu $a0, $zero, 1
    return func_0013abf0();  // Tail call                       // 0x001310ac: j 0x13abf0
    sp = sp + 0x20;                                             // 0x001310b0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x001310b4: nop 
label_0x1310b8:
    func_0013c6d8();  // 0x13c6a8                                // 0x001310b8: jal 0x13c6a8
    /* nop */                                                   // 0x001310bc: nop 
    func_0013c768();  // 0x13c6d8                                // 0x001310c0: jal 0x13c6d8
    func_0013ac58();  // 0x13abc0                                // 0x001310c8: jal 0x13abc0
    return func_0013abf0();  // Tail call                       // 0x001310e0: j 0x13abf0
    sp = sp + 0x20;                                             // 0x001310e4: addiu $sp, $sp, 0x20
    sp = sp + -0x10;                                            // 0x001310e8: addiu $sp, $sp, -0x10
    if (v0 == 0) goto label_0x131118;                           // 0x001310f0: beqz $v0, 0x131118
    a3 = g_00130004;  // Global at 0x00130004                   // 0x001310f8: lw $a3, 4($v0)
    a0 = g_00130000;  // Global at 0x00130000                   // 0x001310fc: lw $a0, 0($v0)
    a1 = g_00130008;  // Global at 0x00130008                   // 0x00131100: lw $a1, 8($v0)
    func_0013c680();  // 0x13c4f8                                // 0x00131104: jal 0x13c4f8
    a2 = g_0013000c;  // Global at 0x0013000c                   // 0x00131108: lw $a2, 0xc($v0)
    goto label_0x13112c;                                        // 0x0013110c: b 0x13112c
    /* nop */                                                   // 0x00131114: nop 
label_0x131118:
    func_0013c680();  // 0x13c4f8                                // 0x00131120: jal 0x13c4f8
label_0x13112c:
    return;                                                     // 0x0013112c: jr $ra
    sp = sp + 0x10;                                             // 0x00131130: addiu $sp, $sp, 0x10
}