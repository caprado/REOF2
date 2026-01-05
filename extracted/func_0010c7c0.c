void func_0010c7c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x10;                                            // 0x0010c7c0: addiu $sp, $sp, -0x10
    v1 = 0x1f << 16;                                            // 0x0010c7c4: lui $v1, 0x1f
    a0 = g_001efdf0;  // Global at 0x001efdf0                   // 0x0010c7d4: lw $a0, -0x210($v1)
    return func_0010c588();  // Tail call                       // 0x0010c7e4: j 0x10c588
    sp = sp + 0x10;                                             // 0x0010c7e8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0010c7ec: nop 
    sp = sp + -0x60;                                            // 0x0010c7f0: addiu $sp, $sp, -0x60
    local_0 = a0;                                               // 0x0010c814: sw $a0, 0($sp)
    local_4 = 0;                                                // 0x0010c818: sw $zero, 4($sp)
    /* nop */                                                   // 0x0010c834: nop 
label_0x10c838:
    s1 = *(int8_t*)(s2);                                        // 0x0010c838: lb $s1, 0($s2)
    v0 = 0x22 << 16;                                            // 0x0010c83c: lui $v0, 0x22
    v0 = v0 + s1;                                               // 0x0010c840: addu $v0, $v0, $s1
    v0 = g_0021ffe9;  // Global at 0x0021ffe9                   // 0x0010c844: lbu $v0, -0x17($v0)
    v0 = v0 & 8;                                                // 0x0010c848: andi $v0, $v0, 8
    /* nop */                                                   // 0x0010c84c: nop 
    /* nop */                                                   // 0x0010c850: nop 
    if (v0 != 0) goto label_0x10c838;                           // 0x0010c854: bnez $v0, 0x10c838
    s2 = s2 + 1;                                                // 0x0010c858: addiu $s2, $s2, 1
    v0 = 0x2d;                                                  // 0x0010c85c: addiu $v0, $zero, 0x2d
    if (s1 != v0) goto label_0x10c880;                          // 0x0010c860: bne $s1, $v0, 0x10c880
    v0 = 0x2b;                                                  // 0x0010c864: addiu $v0, $zero, 0x2b
    v0 = 1;                                                     // 0x0010c868: addiu $v0, $zero, 1
    s1 = *(int8_t*)(s2);                                        // 0x0010c86c: lb $s1, 0($s2)
    s2 = s2 + 1;                                                // 0x0010c870: addiu $s2, $s2, 1
    goto label_0x10c890;                                        // 0x0010c874: b 0x10c890
    local_4 = v0;                                               // 0x0010c878: sw $v0, 4($sp)
    /* nop */                                                   // 0x0010c87c: nop 
label_0x10c880:
    if (s1 != v0) goto label_0x10c890;                          // 0x0010c880: bne $s1, $v0, 0x10c890
    /* nop */                                                   // 0x0010c884: nop 
    s1 = *(int8_t*)(s2);                                        // 0x0010c888: lb $s1, 0($s2)
    s2 = s2 + 1;                                                // 0x0010c88c: addiu $s2, $s2, 1
label_0x10c890:
    if (s3 == 0) goto label_0x10c8a0;                           // 0x0010c890: beqz $s3, 0x10c8a0
    v0 = 0x10;                                                  // 0x0010c894: addiu $v0, $zero, 0x10
    if (s3 != v0) goto label_0x10c8cc;                          // 0x0010c898: bne $s3, $v0, 0x10c8cc
    /* nop */                                                   // 0x0010c89c: nop 
label_0x10c8a0:
    v0 = 0x30;                                                  // 0x0010c8a0: addiu $v0, $zero, 0x30
    if (s1 != v0) goto label_0x10c8cc;                          // 0x0010c8a4: bne $s1, $v0, 0x10c8cc
    v0 = 0x78;                                                  // 0x0010c8a8: addiu $v0, $zero, 0x78
    v1 = *(int8_t*)(s2);                                        // 0x0010c8ac: lb $v1, 0($s2)
    if (v1 == v0) goto label_0x10c8c0;                          // 0x0010c8b0: beq $v1, $v0, 0x10c8c0
    v0 = 0x58;                                                  // 0x0010c8b4: addiu $v0, $zero, 0x58
    if (v1 != v0) goto label_0x10c8cc;                          // 0x0010c8b8: bne $v1, $v0, 0x10c8cc
    /* nop */                                                   // 0x0010c8bc: nop 
label_0x10c8c0:
    s1 = *(int8_t*)((s2) + 1);                                  // 0x0010c8c0: lb $s1, 1($s2)
    s2 = s2 + 2;                                                // 0x0010c8c4: addiu $s2, $s2, 2
    s3 = 0x10;                                                  // 0x0010c8c8: addiu $s3, $zero, 0x10
label_0x10c8cc:
    /* bnezl $s3, 0x10c8e8 */                                   // 0x0010c8cc: bnezl $s3, 0x10c8e8
    v1 = 0xa;                                                   // 0x0010c8d4: addiu $v1, $zero, 0xa
    s3 = 8;                                                     // 0x0010c8d8: addiu $s3, $zero, 8
    v0 = s1 ^ 0x30;                                             // 0x0010c8dc: xori $v0, $s1, 0x30
    if (v0 != 0) s3 = v1;                                       // 0x0010c8e0: movn $s3, $v1, $v0
    a0 = -1;                                                    // 0x0010c8e8: addiu $a0, $zero, -1
    func_001104e8();  // 1104e8                                // 0x0010c8f0: jal 0x1104e8
    a0 = -1;                                                    // 0x0010c8f8: addiu $a0, $zero, -1
    func_00110a68();  // 110a68                                // 0x0010c904: jal 0x110a68
    goto label_0x10c970;                                        // 0x0010c914: b 0x10c970
    /* nop */                                                   // 0x0010c91c: nop 
label_0x10c920:
    v0 = (s1 < s3) ? 1 : 0;                                     // 0x0010c920: slt $v0, $s1, $s3
    if (v0 == 0) goto label_0x10c9b0;                           // 0x0010c924: beqz $v0, 0x10c9b0
    /* nop */                                                   // 0x0010c928: nop 
    if (s0 < 0) goto label_0x10c950;                            // 0x0010c92c: bltz $s0, 0x10c950
    v0 = ((unsigned)s4 < (unsigned)a1) ? 1 : 0;                 // 0x0010c930: sltu $v0, $s4, $a1
    /* bnezl $v0, 0x10c968 */                                   // 0x0010c934: bnezl $v0, 0x10c968
    s0 = -1;                                                    // 0x0010c938: addiu $s0, $zero, -1
    if (a1 != s4) goto label_0x10c958;                          // 0x0010c93c: bne $a1, $s4, 0x10c958
    v0 = (s6 < s1) ? 1 : 0;                                     // 0x0010c944: slt $v0, $s6, $s1
    if (v0 == 0) goto label_0x10c958;                           // 0x0010c948: beqz $v0, 0x10c958
    /* nop */                                                   // 0x0010c94c: nop 
label_0x10c950:
    goto label_0x10c968;                                        // 0x0010c950: b 0x10c968
    s0 = -1;                                                    // 0x0010c954: addiu $s0, $zero, -1
label_0x10c958:
    func_0010f748();  // 10f748                                // 0x0010c958: jal 0x10f748
    s0 = 1;                                                     // 0x0010c960: addiu $s0, $zero, 1
label_0x10c968:
    s1 = *(int8_t*)(s2);                                        // 0x0010c968: lb $s1, 0($s2)
    s2 = s2 + 1;                                                // 0x0010c96c: addiu $s2, $s2, 1
label_0x10c970:
    a0 = 0x22 << 16;                                            // 0x0010c970: lui $a0, 0x22
    a0 = a0 + s1;                                               // 0x0010c974: addu $a0, $a0, $s1
    a0 = g_0021ffe9;  // Global at 0x0021ffe9                   // 0x0010c978: lbu $a0, -0x17($a0)
    v0 = a0 & 4;                                                // 0x0010c97c: andi $v0, $a0, 4
    if (v0 == 0) goto label_0x10c990;                           // 0x0010c980: beqz $v0, 0x10c990
    v0 = a0 & 3;                                                // 0x0010c984: andi $v0, $a0, 3
    goto label_0x10c920;                                        // 0x0010c988: b 0x10c920
    s1 = s1 + -0x30;                                            // 0x0010c98c: addiu $s1, $s1, -0x30
label_0x10c990:
    if (v0 == 0) goto label_0x10c9b0;                           // 0x0010c990: beqz $v0, 0x10c9b0
    v0 = s1 + -0x37;                                            // 0x0010c994: addiu $v0, $s1, -0x37
    v1 = s1 + -0x57;                                            // 0x0010c998: addiu $v1, $s1, -0x57
    a0 = a0 & 1;                                                // 0x0010c99c: andi $a0, $a0, 1
    goto label_0x10c920;                                        // 0x0010c9a4: b 0x10c920
    if (a0 == 0) s1 = v1;                                       // 0x0010c9a8: movz $s1, $v1, $a0
    /* nop */                                                   // 0x0010c9ac: nop 
label_0x10c9b0:
    if (s0 >= 0) goto label_0x10c9d0;                           // 0x0010c9b0: bgez $s0, 0x10c9d0
    v1 = local_4;                                               // 0x0010c9b4: lw $v1, 4($sp)
    v1 = local_0;                                               // 0x0010c9b8: lw $v1, 0($sp)
    v0 = 0x22;                                                  // 0x0010c9bc: addiu $v0, $zero, 0x22
    a1 = -1;                                                    // 0x0010c9c0: addiu $a1, $zero, -1
    goto label_0x10c9d8;                                        // 0x0010c9c4: b 0x10c9d8
    g_001f0000 = v0;  // Global at 0x001f0000                   // 0x0010c9c8: sw $v0, 0($v1)
    /* nop */                                                   // 0x0010c9cc: nop 
label_0x10c9d0:
    if (v1 != 0) a1 = v0;                                       // 0x0010c9d4: movn $a1, $v0, $v1
label_0x10c9d8:
    if (fp == 0) goto label_0x10c9e8;                           // 0x0010c9d8: beqz $fp, 0x10c9e8
    v0 = s2 + -1;                                               // 0x0010c9dc: addiu $v0, $s2, -1
    if (s0 != 0) s5 = v0;                                       // 0x0010c9e0: movn $s5, $v0, $s0
    *(uint32_t*)(fp) = s5;                                      // 0x0010c9e4: sw $s5, 0($fp)
label_0x10c9e8:
    return;                                                     // 0x0010ca14: jr $ra
    sp = sp + 0x60;                                             // 0x0010ca18: addiu $sp, $sp, 0x60
}