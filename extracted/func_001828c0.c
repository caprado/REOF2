void func_001828c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x70;                                            // 0x001828c0: addiu $sp, $sp, -0x70
    v1 = 0x184;                                                 // 0x001828c4: addiu $v1, $zero, 0x184
    v0 = 0x21 << 16;                                            // 0x001828cc: lui $v0, 0x21
    /* multiply: s1 * v1 -> hi:lo */                            // 0x001828d8: mult $ac3, $s1, $v1
    v0 = v0 + 0x6018;                                           // 0x001828dc: addiu $v0, $v0, 0x6018
    t1 = v1 + v0;                                               // 0x001828f8: addu $t1, $v1, $v0
    if (a1 >= 0) goto label_0x18290c;                           // 0x001828fc: bgez $a1, 0x18290c
    v0 = 0 | 0xffff;                                            // 0x00182904: ori $v0, $zero, 0xffff
    a2 = a1 + v0;                                               // 0x00182908: addu $a2, $a1, $v0
label_0x18290c:
    v0 = 0x898;                                                 // 0x0018290c: addiu $v0, $zero, 0x898
    s5 = 0x27 << 16;                                            // 0x00182910: lui $s5, 0x27
    t0 = s5 + 0x72c8;                                           // 0x00182918: addiu $t0, $s5, 0x72c8
    v0 = -1;                                                    // 0x0018291c: addiu $v0, $zero, -1
    a0 = t0 + 0x804;                                            // 0x00182920: addiu $a0, $t0, 0x804
    v0 = (v0 < a1) ? 1 : 0;                                     // 0x00182924: slt $v0, $v0, $a1
    v1 = a1 + 0xff;                                             // 0x00182928: addiu $v1, $a1, 0xff
    if (v0 != 0) v1 = a1;                                       // 0x0018292c: movn $v1, $a1, $v0
    s0 = a2 >> 0x10;                                            // 0x00182930: sra $s0, $a2, 0x10
    s2 = a3 + a0;                                               // 0x00182934: addu $s2, $a3, $a0
    v1 = v1 >> 8;                                               // 0x00182938: sra $v1, $v1, 8
    v0 = s0 << 8;                                               // 0x0018293c: sll $v0, $s0, 8
    a0 = *(int32_t*)(s2);                                       // 0x00182940: lw $a0, 0($s2)
    if (a0 == s0) goto label_0x182984;                          // 0x00182944: beq $a0, $s0, 0x182984
    s4 = v1 - v0;                                               // 0x00182948: subu $s4, $v1, $v0
    v0 = s0 << 2;                                               // 0x0018294c: sll $v0, $s0, 2
    a1 = a3 + t0;                                               // 0x00182950: addu $a1, $a3, $t0
    v0 = t1 + v0;                                               // 0x00182954: addu $v0, $t1, $v0
    a2 = g_00216068;  // Global at 0x00216068                   // 0x0018295c: lw $a2, 0x50($v0)
    func_00186dc8();  // 186dc8                                // 0x00182960: jal 0x186dc8
    a3 = 1;                                                     // 0x00182964: addiu $a3, $zero, 1
    /* bnezl $v0, 0x182984 */                                   // 0x00182968: bnezl $v0, 0x182984
    *(uint32_t*)(s2) = s0;                                      // 0x0018296c: sw $s0, 0($s2)
    v1 = 0x8101 << 16;                                          // 0x00182970: lui $v1, 0x8101
    v1 = v1 | 0x6f;                                             // 0x00182978: ori $v1, $v1, 0x6f
    goto label_0x1829b8;                                        // 0x0018297c: b 0x1829b8
    *(uint32_t*)(s3) = v1;                                      // 0x00182980: sw $v1, 0($s3)
label_0x182984:
    v1 = 0x898;                                                 // 0x00182984: addiu $v1, $zero, 0x898
    v0 = s4 << 2;                                               // 0x00182988: sll $v0, $s4, 2
    /* multiply: s1 * v1 -> hi:lo */                            // 0x0018298c: mult $ac3, $s1, $v1
    a0 = s5 + 0x72c8;                                           // 0x00182990: addiu $a0, $s5, 0x72c8
    v0 = v0 + v1;                                               // 0x00182994: addu $v0, $v0, $v1
    v0 = v0 + a0;                                               // 0x00182998: addu $v0, $v0, $a0
    v0 = g_00216018;  // Global at 0x00216018                   // 0x0018299c: lw $v0, 0($v0)
    if (v0 >= 0) goto label_0x1829b8;                           // 0x001829a0: bgezl $v0, 0x1829b8
    *(uint32_t*)(s3) = 0;                                       // 0x001829a4: sw $zero, 0($s3)
    v1 = 0x8101 << 16;                                          // 0x001829a8: lui $v1, 0x8101
    v1 = v1 | 0x9001;                                           // 0x001829b0: ori $v1, $v1, 0x9001
    *(uint32_t*)(s3) = v1;                                      // 0x001829b4: sw $v1, 0($s3)
label_0x1829b8:
    return;                                                     // 0x001829d4: jr $ra
    sp = sp + 0x70;                                             // 0x001829d8: addiu $sp, $sp, 0x70
}