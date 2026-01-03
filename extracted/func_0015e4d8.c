void func_0015e4d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = 0x16 << 16;                                            // 0x0015e4d8: lui $a1, 0x16
    sp = sp + -0x10;                                            // 0x0015e4dc: addiu $sp, $sp, -0x10
    a0 = 2;                                                     // 0x0015e4e4: addiu $a0, $zero, 2
    func_00163218();  // 163218                                // 0x0015e4ec: jal 0x163218
    a1 = a1 + 0x3a18;                                           // 0x0015e4f0: addiu $a1, $a1, 0x3a18
    a0 = 0x16 << 16;                                            // 0x0015e4f4: lui $a0, 0x16
    a0 = a0 + 0x3a60;                                           // 0x0015e4f8: addiu $a0, $a0, 0x3a60
    func_001632c8();  // 1632c8                                // 0x0015e4fc: jal 0x1632c8
    a0 = 0x16 << 16;                                            // 0x0015e504: lui $a0, 0x16
    a0 = a0 + 0x3ae0;                                           // 0x0015e50c: addiu $a0, $a0, 0x3ae0
    return func_00163278();  // Tail call                       // 0x0015e514: j 0x163278
    sp = sp + 0x10;                                             // 0x0015e518: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0015e51c: nop 
    sp = sp + -0x20;                                            // 0x0015e520: addiu $sp, $sp, -0x20
    func_0015e338();  // 15e338                                // 0x0015e530: jal 0x15e338
    func_00107c70();  // 107c70                                // 0x0015e544: jal 0x107c70
    a2 = 0x10e8;                                                // 0x0015e548: addiu $a2, $zero, 0x10e8
    func_00163f30();  // 163f30                                // 0x0015e54c: jal 0x163f30
    a0 = 1;                                                     // 0x0015e554: addiu $a0, $zero, 1
    v0 = 1;                                                     // 0x0015e558: addiu $v0, $zero, 1
    *(uint32_t*)((s1) + 0x58) = 0;                              // 0x0015e55c: sw $zero, 0x58($s1)
    if (s0 == 0) goto label_0x15e590;                           // 0x0015e560: beqz $s0, 0x15e590
    a1 = s1 + 4;                                                // 0x0015e564: addiu $a1, $s1, 4
    v0 = *(int32_t*)((s0) + 4);                                 // 0x0015e568: lw $v0, 4($s0)
    v1 = *(int32_t*)((s0) + 0xc);                               // 0x0015e56c: lw $v1, 0xc($s0)
    g_00163a1c = v0;  // Global at 0x00163a1c                   // 0x0015e570: sw $v0, 4($a1)
    FPU_F0 = *(float*)(s0);  // Load float                      // 0x0015e574: lwc1 $f0, 0($s0)
    v0 = *(int32_t*)((s0) + 8);                                 // 0x0015e578: lw $v0, 8($s0)
    g_00163a24 = v1;  // Global at 0x00163a24                   // 0x0015e57c: sw $v1, 0xc($a1)
    *(float*)(a1) = FPU_F0;  // Store float                     // 0x0015e580: swc1 $f0, 0($a1)
    goto label_0x15e5ac;                                        // 0x0015e584: b 0x15e5ac
    g_00163a20 = v0;  // Global at 0x00163a20                   // 0x0015e588: sw $v0, 8($a1)
    /* nop */                                                   // 0x0015e58c: nop 
label_0x15e590:
    at = 0x426f << 16;                                          // 0x0015e590: lui $at, 0x426f
    at = at | 0xc28f;                                           // 0x0015e594: ori $at, $at, 0xc28f
    /* move to FPU: $at, $f0 */                                 // 0x0015e598: mtc1 $at, $f0
    g_00163a24 = 0;  // Global at 0x00163a24                    // 0x0015e59c: sw $zero, 0xc($a1)
    *(float*)(a1) = FPU_F0;  // Store float                     // 0x0015e5a0: swc1 $f0, 0($a1)
    g_00163a20 = v0;  // Global at 0x00163a20                   // 0x0015e5a4: sw $v0, 8($a1)
    g_00163a1c = v0;  // Global at 0x00163a1c                   // 0x0015e5a8: sw $v0, 4($a1)
label_0x15e5ac:
    *(uint32_t*)((s1) + 0x3c) = a0;                             // 0x0015e5ac: sw $a0, 0x3c($s1)
    *(uint32_t*)((s1) + 0x38) = a0;                             // 0x0015e5b0: sw $a0, 0x38($s1)
    return;                                                     // 0x0015e5c0: jr $ra
    sp = sp + 0x20;                                             // 0x0015e5c4: addiu $sp, $sp, 0x20
}