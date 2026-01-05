void func_001068b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001068b0: addiu $sp, $sp, -0x50
    s5 = 0x1f << 16;                                            // 0x001068b8: lui $s5, 0x1f
    func_00104ee8();  // 104ee8                                // 0x001068e4: jal 0x104ee8
    v0 = g_001efaf8;  // Global at 0x001efaf8                   // 0x001068ec: lw $v0, -0x508($s5)
    v1 = *(int32_t*)(v0);                                       // 0x001068f0: lw $v1, 0($v0)
    if (v1 != 0) goto label_0x106928;                           // 0x001068f4: bnez $v1, 0x106928
    goto label_0x1069cc;                                        // 0x001068fc: b 0x1069cc
    /* nop */                                                   // 0x00106904: nop 
label_0x106908:
    v0 = *(int32_t*)(v1);                                       // 0x0010690c: lw $v0, 0($v1)
    v0 = s1 - v0;                                               // 0x00106910: subu $v0, $s1, $v0
    v0 = v0 >> 2;                                               // 0x00106914: sra $v0, $v0, 2
    func_00104ef0();  // 104ef0                                // 0x00106918: jal 0x104ef0
    *(uint32_t*)(s7) = v0;                                      // 0x0010691c: sw $v0, 0($s7)
    goto label_0x1069cc;                                        // 0x00106920: b 0x1069cc
    v0 = s0 + 1;                                                // 0x00106924: addiu $v0, $s0, 1
label_0x106928:
    v1 = *(int8_t*)(s0);                                        // 0x00106928: lb $v1, 0($s0)
    if (v1 == 0) goto label_0x10696c;                           // 0x0010692c: beqz $v1, 0x10696c
    v0 = 0x3d;                                                  // 0x00106934: addiu $v0, $zero, 0x3d
    if (v1 == v0) goto label_0x106970;                          // 0x00106938: beq $v1, $v0, 0x106970
    v0 = g_001efaf8;  // Global at 0x001efaf8                   // 0x0010693c: lw $v0, -0x508($s5)
    v1 = 0x3d;                                                  // 0x00106940: addiu $v1, $zero, 0x3d
    s0 = s0 + 1;                                                // 0x00106944: addiu $s0, $s0, 1
label_0x106948:
    v0 = *(int8_t*)(s0);                                        // 0x00106948: lb $v0, 0($s0)
    if (v0 == 0) goto label_0x10696c;                           // 0x0010694c: beqz $v0, 0x10696c
    s2 = s2 + 1;                                                // 0x00106950: addiu $s2, $s2, 1
    /* nop */                                                   // 0x00106954: nop 
    /* nop */                                                   // 0x00106958: nop 
    /* nop */                                                   // 0x0010695c: nop 
    /* nop */                                                   // 0x00106960: nop 
    if (v0 != v1) goto label_0x106948;                          // 0x00106964: bnel $v0, $v1, 0x106948
    s0 = s0 + 1;                                                // 0x00106968: addiu $s0, $s0, 1
label_0x10696c:
    v0 = g_001efaf8;  // Global at 0x001efaf8                   // 0x0010696c: lw $v0, -0x508($s5)
label_0x106970:
    s1 = *(int32_t*)(v0);                                       // 0x00106970: lw $s1, 0($v0)
    a0 = *(int32_t*)(s1);                                       // 0x00106974: lw $a0, 0($s1)
    if (a0 == 0) goto label_0x1069c0;                           // 0x00106978: beqz $a0, 0x1069c0
    /* nop */                                                   // 0x0010697c: nop 
    s4 = 0x3d;                                                  // 0x00106980: addiu $s4, $zero, 0x3d
    /* nop */                                                   // 0x00106984: nop 
label_0x106988:
    func_0010b0e8();  // 10b0e8                                // 0x0010698c: jal 0x10b0e8
    /* bnezl $v0, 0x1069b4 */                                   // 0x00106994: bnezl $v0, 0x1069b4
    s1 = s1 + 4;                                                // 0x00106998: addiu $s1, $s1, 4
    v0 = *(int32_t*)(s1);                                       // 0x0010699c: lw $v0, 0($s1)
    s0 = v0 + s2;                                               // 0x001069a0: addu $s0, $v0, $s2
    v1 = *(int8_t*)(s0);                                        // 0x001069a4: lb $v1, 0($s0)
    if (v1 == s4) goto label_0x106908;                          // 0x001069a8: beq $v1, $s4, 0x106908
    v1 = g_001efaf8;  // Global at 0x001efaf8                   // 0x001069ac: lw $v1, -0x508($s5)
    s1 = s1 + 4;                                                // 0x001069b0: addiu $s1, $s1, 4
    v0 = *(int32_t*)(s1);                                       // 0x001069b4: lw $v0, 0($s1)
    if (v0 != 0) goto label_0x106988;                           // 0x001069b8: bnez $v0, 0x106988
label_0x1069c0:
    func_00104ef0();  // 104ef0                                // 0x001069c0: jal 0x104ef0
label_0x1069cc:
    return;                                                     // 0x001069f0: jr $ra
    sp = sp + 0x50;                                             // 0x001069f4: addiu $sp, $sp, 0x50
}