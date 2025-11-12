void func_0013a0d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x60;                                            // 0x0013a0d8: addiu $sp, $sp, -0x60
    local_0 = a0;                                               // 0x0013a104: sw $a0, 0($sp)
    v0 = *(int8_t*)(s3);                                        // 0x0013a120: lb $v0, 0($s3)
    if (v0 == 0) goto label_0x13a210;                           // 0x0013a124: beqz $v0, 0x13a210
    local_4 = a2;                                               // 0x0013a128: sw $a2, 4($sp)
    v1 = local_0;                                               // 0x0013a12c: lw $v1, 0($sp)
    v0 = s6 << 3;                                               // 0x0013a130: sll $v0, $s6, 3
    s4 = 0xa;                                                   // 0x0013a134: addiu $s4, $zero, 0xa
    fp = 0xd;                                                   // 0x0013a138: addiu $fp, $zero, 0xd
    s0 = v0 + v1;                                               // 0x0013a13c: addu $s0, $v0, $v1
    v0 = *(int8_t*)(a1);                                        // 0x0013a140: lb $v0, 0($a1)
    /* nop */                                                   // 0x0013a144: nop 
    if (v0 == s4) goto label_0x13a15c;                          // 0x0013a148: beql $v0, $s4, 0x13a15c
    v0 = *(int8_t*)((a1) + 1);                                  // 0x0013a14c: lb $v0, 1($a1)
    if (v0 != 0) goto label_0x13a1ec;                           // 0x0013a150: bnez $v0, 0x13a1ec
    v1 = s2 + 1;                                                // 0x0013a154: addiu $v1, $s2, 1
    v0 = *(int8_t*)((a1) + 1);                                  // 0x0013a158: lb $v0, 1($a1)
label_0x13a15c:
    if (v0 == s4) goto label_0x13a170;                          // 0x0013a15c: beql $v0, $s4, 0x13a170
    s2 = s2 + 1;                                                // 0x0013a160: addiu $s2, $s2, 1
    if (v0 != 0) goto label_0x13a178;                           // 0x0013a164: bnez $v0, 0x13a178
    v1 = a1 + -1;                                               // 0x0013a168: addiu $v1, $a1, -1
    s2 = s2 + 1;                                                // 0x0013a16c: addiu $s2, $s2, 1
label_0x13a170:
    a1 = s3 + s2;                                               // 0x0013a170: addu $a1, $s3, $s2
    v1 = a1 + -1;                                               // 0x0013a174: addiu $v1, $a1, -1
label_0x13a178:
    v0 = *(int8_t*)(v1);                                        // 0x0013a178: lb $v0, 0($v1)
    if (v0 == s4) goto label_0x13a18c;                          // 0x0013a17c: beq $v0, $s4, 0x13a18c
    s1 = s2 - a0;                                               // 0x0013a180: subu $s1, $s2, $a0
    if (v0 != fp) goto label_0x13a194;                          // 0x0013a184: bne $v0, $fp, 0x13a194
    v0 = a1 + -2;                                               // 0x0013a188: addiu $v0, $a1, -2
label_0x13a18c:
    *(uint8_t*)(v1) = 0;                                        // 0x0013a18c: sb $zero, 0($v1)
    v0 = a1 + -2;                                               // 0x0013a190: addiu $v0, $a1, -2
label_0x13a194:
    v1 = g_00203ed0;  // Global at 0x00203ed0                   // 0x0013a194: lb $v1, 0($v0)
    if (v1 == s4) goto label_0x13a1ac;                          // 0x0013a198: beql $v1, $s4, 0x13a1ac
    g_00203ed0 = 0;  // Global at 0x00203ed0                    // 0x0013a19c: sb $zero, 0($v0)
    if (v1 != fp) goto label_0x13a1b0;                          // 0x0013a1a0: bne $v1, $fp, 0x13a1b0
    a1 = s3 + a0;                                               // 0x0013a1a4: addu $a1, $s3, $a0
    g_00203ed0 = 0;  // Global at 0x00203ed0                    // 0x0013a1a8: sb $zero, 0($v0)
label_0x13a1ac:
    a1 = s3 + a0;                                               // 0x0013a1ac: addu $a1, $s3, $a0
label_0x13a1b0:
    func_00107b68();  // 0x107ab8                                // 0x0013a1b4: jal 0x107ab8
    func_00139560();  // 0x1394e8                                // 0x0013a1bc: jal 0x1394e8
    a2 = s0 + s1;                                               // 0x0013a1c4: addu $a2, $s0, $s1
    v0 = *(int8_t*)((a2) + -1);                                 // 0x0013a1c8: lb $v0, -1($a2)
    /* bnezl $v0, 0x13a1d4 */                                   // 0x0013a1cc: bnezl $v0, 0x13a1d4
    *(uint8_t*)(a2) = 0;                                        // 0x0013a1d0: sb $zero, 0($a2)
    v1 = s2 + 1;                                                // 0x0013a1d4: addiu $v1, $s2, 1
    v0 = s7 + s0;                                               // 0x0013a1d8: addu $v0, $s7, $s0
    s5 = s5 + 1;                                                // 0x0013a1dc: addiu $s5, $s5, 1
    s0 = v0 + 1;                                                // 0x0013a1e0: addiu $s0, $v0, 1
    if (s5 == s6) goto label_0x13a210;                          // 0x0013a1e4: beq $s5, $s6, 0x13a210
label_0x13a1ec:
    a1 = local_4;                                               // 0x0013a1ec: lw $a1, 4($sp)
    v0 = (a1 < v1) ? 1 : 0;                                     // 0x0013a1f0: slt $v0, $a1, $v1
    if (v0 != 0) goto label_0x13a210;                           // 0x0013a1f4: bnez $v0, 0x13a210
    v0 = s3 + v1;                                               // 0x0013a1fc: addu $v0, $s3, $v1
    v1 = *(int8_t*)(a1);                                        // 0x0013a204: lb $v1, 0($a1)
    /* bnezl $v1, 0x13a148 */                                   // 0x0013a208: bnezl $v1, 0x13a148
    v0 = *(int8_t*)(a1);                                        // 0x0013a20c: lb $v0, 0($a1)
label_0x13a210:
    v0 = 0x20 << 16;                                            // 0x0013a210: lui $v0, 0x20
    v0 = v0 + 0x3ed0;                                           // 0x0013a214: addiu $v0, $v0, 0x3ed0
    v1 = g_00203ed0;  // Global at 0x00203ed0                   // 0x0013a218: lw $v1, 0($v0)
    /* bnezl $v1, 0x13a23c */                                   // 0x0013a21c: bnezl $v1, 0x13a23c
    g_00203edc = s7;  // Global at 0x00203edc                   // 0x0013a224: sw $s7, 0xc($v0)
    v1 = local_0;                                               // 0x0013a228: lw $v1, 0($sp)
    g_00203ed8 = s6;  // Global at 0x00203ed8                   // 0x0013a22c: sw $s6, 8($v0)
    g_00203ed0 = v1;  // Global at 0x00203ed0                   // 0x0013a230: sw $v1, 0($v0)
    g_00203ed4 = s5;  // Global at 0x00203ed4                   // 0x0013a234: sw $s5, 4($v0)
    return;                                                     // 0x0013a264: jr $ra
    sp = sp + 0x60;                                             // 0x0013a268: addiu $sp, $sp, 0x60
}