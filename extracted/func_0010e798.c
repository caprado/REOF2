void func_0010e798() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_260, local_264, local_270;
    
    sp = sp + -0x2f0;                                           // 0x0010e798: addiu $sp, $sp, -0x2f0
    local_264 = 0;                                              // 0x0010e7b8: sw $zero, 0x264($sp)
    local_260 = 0;                                              // 0x0010e7bc: sw $zero, 0x260($sp)
label_0x10e7e0:
    v1 = *(int8_t*)(s5);                                        // 0x0010e7e0: lb $v1, 0($s5)
label_0x10e7e4:
    s5 = s5 + 1;                                                // 0x0010e7e4: addiu $s5, $s5, 1
    if (v1 == 0) goto label_0x10f3f4;                           // 0x0010e7e8: beqz $v1, 0x10f3f4
    v0 = local_260;                                             // 0x0010e7ec: lw $v0, 0x260($sp)
    v0 = 1;                                                     // 0x0010e7f0: addiu $v0, $zero, 1
    if (v0 != v0) goto label_0x10e880;                          // 0x0010e7f4: bne $v0, $v0, 0x10e880
    v0 = 0x25;                                                  // 0x0010e7f8: addiu $v0, $zero, 0x25
    v0 = 0x22 << 16;                                            // 0x0010e7fc: lui $v0, 0x22
    v0 = v0 + v1;                                               // 0x0010e800: addu $v0, $v0, $v1
    v0 = g_0021ffe9;  // Global at 0x0021ffe9                   // 0x0010e804: lbu $v0, -0x17($v0)
    v0 = v0 & 8;                                                // 0x0010e808: andi $v0, $v0, 8
    /* beqzl $v0, 0x10e880 */                                   // 0x0010e80c: beqzl $v0, 0x10e880
    v0 = 0x25;                                                  // 0x0010e810: addiu $v0, $zero, 0x25
    goto label_0x10e838;                                        // 0x0010e814: b 0x10e838
    v0 = *(int32_t*)((s2) + 4);                                 // 0x0010e818: lw $v0, 4($s2)
    /* nop */                                                   // 0x0010e81c: nop 
    v0 = a0 + 1;                                                // 0x0010e820: addiu $v0, $a0, 1
    *(uint32_t*)(s2) = v0;                                      // 0x0010e824: sw $v0, 0($s2)
    t0 = t0 + 1;                                                // 0x0010e828: addiu $t0, $t0, 1
    v1 = v1 + -1;                                               // 0x0010e82c: addiu $v1, $v1, -1
    *(uint32_t*)((s2) + 4) = v1;                                // 0x0010e830: sw $v1, 4($s2)
    v0 = *(int32_t*)((s2) + 4);                                 // 0x0010e834: lw $v0, 4($s2)
label_0x10e838:
    if (v0 > 0) goto label_0x10e858;                            // 0x0010e838: bgtzl $v0, 0x10e858
    a0 = *(int32_t*)(s2);                                       // 0x0010e83c: lw $a0, 0($s2)
    func_0010a058();  // 10a058                                // 0x0010e844: jal 0x10a058
    /* FPU: addq.ph $zero, $sp, $t0 */                          // 0x0010e848: addq.ph $zero, $sp, $t0
    if (v0 != 0) goto label_0x10f3f0;                           // 0x0010e84c: bnez $v0, 0x10f3f0
    /* FPU: aver_u.h $w10, $w0, $w8 */                          // 0x0010e850: aver_u.h $w10, $w0, $w8
    a0 = *(int32_t*)(s2);                                       // 0x0010e854: lw $a0, 0($s2)
label_0x10e858:
    v1 = g_00220001;  // Global at 0x00220001                   // 0x0010e858: lbu $v1, 0($a0)
    v0 = 0x22 << 16;                                            // 0x0010e85c: lui $v0, 0x22
    v0 = v0 + v1;                                               // 0x0010e860: addu $v0, $v0, $v1
    v0 = g_0021ffe9;  // Global at 0x0021ffe9                   // 0x0010e864: lbu $v0, -0x17($v0)
    v0 = v0 & 8;                                                // 0x0010e868: andi $v0, $v0, 8
    /* bnezl $v0, 0x10e820 */                                   // 0x0010e86c: bnezl $v0, 0x10e820
    v1 = *(int32_t*)((s2) + 4);                                 // 0x0010e870: lw $v1, 4($s2)
    goto label_0x10e7e4;                                        // 0x0010e874: b 0x10e7e4
    v1 = *(int8_t*)(s5);                                        // 0x0010e878: lb $v1, 0($s5)
    /* nop */                                                   // 0x0010e87c: nop 
label_0x10e880:
    if (v1 != v0) goto label_0x10e8bc;                          // 0x0010e880: bne $v1, $v0, 0x10e8bc
    s1 = s5 + -1;                                               // 0x0010e884: addiu $s1, $s5, -1
label_0x10e890:
    s0 = *(int8_t*)(s5);                                        // 0x0010e890: lb $s0, 0($s5)
    v0 = ((unsigned)s0 < (unsigned)0x79) ? 1 : 0;               // 0x0010e894: sltiu $v0, $s0, 0x79
    if (v0 == 0) goto label_0x10ea98;                           // 0x0010e898: beqz $v0, 0x10ea98
    s5 = s5 + 1;                                                // 0x0010e89c: addiu $s5, $s5, 1
    v0 = s0 << 2;                                               // 0x0010e8a0: sll $v0, $s0, 2
    v1 = 0x22 << 16;                                            // 0x0010e8a4: lui $v1, 0x22
    v1 = v1 + v0;                                               // 0x0010e8a8: addu $v1, $v1, $v0
    v1 = g_002205e0;  // Global at 0x002205e0                   // 0x0010e8ac: lw $v1, 0x5e0($v1)
    /* jump to address in v1 */                                 // 0x0010e8b0: jr $v1
    /* nop */                                                   // 0x0010e8b4: nop 
    s1 = s5 + -1;                                               // 0x0010e8b8: addiu $s1, $s5, -1
label_0x10e8bc:
label_0x10e8c0:
    v0 = *(int32_t*)((s2) + 4);                                 // 0x0010e8c0: lw $v0, 4($s2)
    if (v0 > 0) goto label_0x10e8e4;                            // 0x0010e8c4: bgtzl $v0, 0x10e8e4
    a0 = *(int32_t*)(s2);                                       // 0x0010e8c8: lw $a0, 0($s2)
    func_0010a058();  // 10a058                                // 0x0010e8d0: jal 0x10a058
    /* FPU: addq.ph $zero, $sp, $t0 */                          // 0x0010e8d4: addq.ph $zero, $sp, $t0
    if (v0 != 0) goto label_0x10f3e0;                           // 0x0010e8d8: bnez $v0, 0x10f3e0
    /* FPU: aver_u.h $w10, $w0, $w8 */                          // 0x0010e8dc: aver_u.h $w10, $w0, $w8
    a0 = *(int32_t*)(s2);                                       // 0x0010e8e0: lw $a0, 0($s2)
label_0x10e8e4:
    v1 = *(int8_t*)(s1);                                        // 0x0010e8e4: lb $v1, 0($s1)
    v0 = g_00220001;  // Global at 0x00220001                   // 0x0010e8e8: lbu $v0, 0($a0)
    if (v0 != v1) goto label_0x10f3f4;                          // 0x0010e8ec: bne $v0, $v1, 0x10f3f4
    v0 = local_260;                                             // 0x0010e8f0: lw $v0, 0x260($sp)
    v0 = *(int32_t*)((s2) + 4);                                 // 0x0010e8f4: lw $v0, 4($s2)
    v1 = a0 + 1;                                                // 0x0010e8f8: addiu $v1, $a0, 1
    s0 = s0 + 1;                                                // 0x0010e8fc: addiu $s0, $s0, 1
    *(uint32_t*)(s2) = v1;                                      // 0x0010e900: sw $v1, 0($s2)
    v0 = v0 + -1;                                               // 0x0010e904: addiu $v0, $v0, -1
    t0 = t0 + 1;                                                // 0x0010e908: addiu $t0, $t0, 1
    *(uint32_t*)((s2) + 4) = v0;                                // 0x0010e90c: sw $v0, 4($s2)
    if (s0 <= 0) goto label_0x10e8c0;                           // 0x0010e910: blez $s0, 0x10e8c0
    s1 = s1 + 1;                                                // 0x0010e914: addiu $s1, $s1, 1
    goto label_0x10e7e4;                                        // 0x0010e918: b 0x10e7e4
    v1 = *(int8_t*)(s5);                                        // 0x0010e91c: lb $v1, 0($s5)
    goto label_0x10e890;                                        // 0x0010e920: b 0x10e890
    s1 = s1 | 8;                                                // 0x0010e924: ori $s1, $s1, 8
    goto label_0x10e890;                                        // 0x0010e928: b 0x10e890
    s1 = s1 | 1;                                                // 0x0010e92c: ori $s1, $s1, 1
    goto label_0x10e890;                                        // 0x0010e930: b 0x10e890
    s1 = s1 | 2;                                                // 0x0010e934: ori $s1, $s1, 2
    goto label_0x10e890;                                        // 0x0010e938: b 0x10e890
    s1 = s1 | 4;                                                // 0x0010e93c: ori $s1, $s1, 4
    v0 = s4 << 2;                                               // 0x0010e940: sll $v0, $s4, 2
    v0 = v0 + s4;                                               // 0x0010e944: addu $v0, $v0, $s4
    v0 = v0 << 1;                                               // 0x0010e948: sll $v0, $v0, 1
    v0 = v0 + s0;                                               // 0x0010e94c: addu $v0, $v0, $s0
    goto label_0x10e890;                                        // 0x0010e950: b 0x10e890
    s4 = v0 + -0x30;                                            // 0x0010e954: addiu $s4, $v0, -0x30
    s1 = s1 | 1;                                                // 0x0010e958: ori $s1, $s1, 1
    v0 = 0x11 << 16;                                            // 0x0010e95c: lui $v0, 0x11
    s0 = 3;                                                     // 0x0010e960: addiu $s0, $zero, 3
    goto label_0x10e9b4;                                        // 0x0010e964: b 0x10e9b4
    v0 = v0 + -0x3840;                                          // 0x0010e968: addiu $v0, $v0, -0x3840
    /* nop */                                                   // 0x0010e96c: nop 
    v0 = 0x11 << 16;                                            // 0x0010e970: lui $v0, 0x11
    s0 = 3;                                                     // 0x0010e974: addiu $s0, $zero, 3
    v0 = v0 + -0x3840;                                          // 0x0010e978: addiu $v0, $v0, -0x3840
    goto label_0x10eac0;                                        // 0x0010e980: b 0x10eac0
    local_264 = v0;                                             // 0x0010e984: sw $v0, 0x264($sp)
    s1 = s1 | 1;                                                // 0x0010e988: ori $s1, $s1, 1
    v0 = 0x11 << 16;                                            // 0x0010e98c: lui $v0, 0x11
    s0 = 3;                                                     // 0x0010e990: addiu $s0, $zero, 3
    v0 = v0 + -0x35e0;                                          // 0x0010e994: addiu $v0, $v0, -0x35e0
    fp = 8;                                                     // 0x0010e998: addiu $fp, $zero, 8
    goto label_0x10eac0;                                        // 0x0010e99c: b 0x10eac0
    local_264 = v0;                                             // 0x0010e9a0: sw $v0, 0x264($sp)
    /* nop */                                                   // 0x0010e9a4: nop 
    v0 = 0x11 << 16;                                            // 0x0010e9a8: lui $v0, 0x11
    s0 = 3;                                                     // 0x0010e9ac: addiu $s0, $zero, 3
    v0 = v0 + -0x35e0;                                          // 0x0010e9b0: addiu $v0, $v0, -0x35e0
label_0x10e9b4:
    fp = 0xa;                                                   // 0x0010e9b4: addiu $fp, $zero, 0xa
    goto label_0x10eac0;                                        // 0x0010e9b8: b 0x10eac0
    local_264 = v0;                                             // 0x0010e9bc: sw $v0, 0x264($sp)
    v0 = 0x11 << 16;                                            // 0x0010e9c0: lui $v0, 0x11
    goto label_0x10ea20;                                        // 0x0010e9c4: b 0x10ea20
    s1 = s1 | 0x100;                                            // 0x0010e9c8: ori $s1, $s1, 0x100
    /* nop */                                                   // 0x0010e9cc: nop 
    goto label_0x10eac0;                                        // 0x0010e9d0: b 0x10eac0
    s0 = 4;                                                     // 0x0010e9d4: addiu $s0, $zero, 4
    goto label_0x10eac0;                                        // 0x0010e9d8: b 0x10eac0
    s0 = 2;                                                     // 0x0010e9dc: addiu $s0, $zero, 2
    func_0010f428();  // 10f428                                // 0x0010e9e8: jal 0x10f428
    /* FPU: addq.ph $zero, $sp, $t0 */                          // 0x0010e9ec: addq.ph $zero, $sp, $t0
    s1 = s1 | 0x20;                                             // 0x0010e9f4: ori $s1, $s1, 0x20
    s0 = 1;                                                     // 0x0010e9f8: addiu $s0, $zero, 1
    goto label_0x10eac0;                                        // 0x0010e9fc: b 0x10eac0
    /* FPU: aver_u.h $w10, $w0, $w8 */                          // 0x0010ea00: aver_u.h $w10, $w0, $w8
    /* nop */                                                   // 0x0010ea04: nop 
    s1 = s1 | 0x20;                                             // 0x0010ea08: ori $s1, $s1, 0x20
    goto label_0x10eac0;                                        // 0x0010ea0c: b 0x10eac0
    /* nop */                                                   // 0x0010ea14: nop 
    v0 = 0x11 << 16;                                            // 0x0010ea18: lui $v0, 0x11
    s1 = s1 | 0x110;                                            // 0x0010ea1c: ori $s1, $s1, 0x110
label_0x10ea20:
    v0 = v0 + -0x35e0;                                          // 0x0010ea20: addiu $v0, $v0, -0x35e0
    s0 = 3;                                                     // 0x0010ea24: addiu $s0, $zero, 3
    local_264 = v0;                                             // 0x0010ea28: sw $v0, 0x264($sp)
    goto label_0x10eac0;                                        // 0x0010ea2c: b 0x10eac0
    fp = 0x10;                                                  // 0x0010ea30: addiu $fp, $zero, 0x10
    /* nop */                                                   // 0x0010ea34: nop 
    v0 = s1 & 8;                                                // 0x0010ea38: andi $v0, $s1, 8
    /* bnezl $v0, 0x10e7e4 */                                   // 0x0010ea3c: bnezl $v0, 0x10e7e4
    v1 = *(int8_t*)(s5);                                        // 0x0010ea40: lb $v1, 0($s5)
    v0 = s1 & 4;                                                // 0x0010ea44: andi $v0, $s1, 4
    /* beqzl $v0, 0x10ea68 */                                   // 0x0010ea48: beqzl $v0, 0x10ea68
    v0 = s1 & 1;                                                // 0x0010ea4c: andi $v0, $s1, 1
    s7 = s7 + 8;                                                // 0x0010ea54: addiu $s7, $s7, 8
    v1 = func_0010ca50;  // Global at 0x0010ca20                 // 0x0010ea58: lw $v1, 0($v0)
    goto label_0x10e7e0;                                        // 0x0010ea5c: b 0x10e7e0
    g_00220002 = t0;  // Global at 0x00220002                   // 0x0010ea60: sh $t0, 0($v1)
    /* nop */                                                   // 0x0010ea64: nop 
    if (v0 == 0) goto label_0x10ea80;                           // 0x0010ea68: beqz $v0, 0x10ea80
    s7 = s7 + 8;                                                // 0x0010ea70: addiu $s7, $s7, 8
    v0 = func_0010ca50;  // Global at 0x0010ca20                 // 0x0010ea74: lw $v0, 0($v0)
    goto label_0x10e7e0;                                        // 0x0010ea78: b 0x10e7e0
label_0x10ea80:
    s7 = s7 + 8;                                                // 0x0010ea80: addiu $s7, $s7, 8
    v1 = func_0010ca50;  // Global at 0x0010ca20                 // 0x0010ea84: lw $v1, 0($v0)
    goto label_0x10e7e0;                                        // 0x0010ea88: b 0x10e7e0
    g_00220002 = t0;  // Global at 0x00220002                   // 0x0010ea8c: sw $t0, 0($v1)
    goto label_0x10f3f4;                                        // 0x0010ea90: b 0x10f3f4
    v0 = -1;                                                    // 0x0010ea94: addiu $v0, $zero, -1
label_0x10ea98:
    v0 = 0x22 << 16;                                            // 0x0010ea98: lui $v0, 0x22
    v0 = v0 + s0;                                               // 0x0010ea9c: addu $v0, $v0, $s0
    v0 = g_0021ffe9;  // Global at 0x0021ffe9                   // 0x0010eaa0: lbu $v0, -0x17($v0)
    s0 = 3;                                                     // 0x0010eaa4: addiu $s0, $zero, 3
    v1 = 0x11 << 16;                                            // 0x0010eaa8: lui $v1, 0x11
    fp = 0xa;                                                   // 0x0010eaac: addiu $fp, $zero, 0xa
    v1 = v1 + -0x3840;                                          // 0x0010eab0: addiu $v1, $v1, -0x3840
    v0 = v0 & 1;                                                // 0x0010eab4: andi $v0, $v0, 1
    local_264 = v1;                                             // 0x0010eab8: sw $v1, 0x264($sp)
    s1 = s1 | v0;                                               // 0x0010eabc: or $s1, $s1, $v0
label_0x10eac0:
    v0 = *(int32_t*)((s2) + 4);                                 // 0x0010eac0: lw $v0, 4($s2)
    if (v0 > 0) goto label_0x10eae4;                            // 0x0010eac4: bgtzl $v0, 0x10eae4
    v0 = s1 & 0x20;                                             // 0x0010eac8: andi $v0, $s1, 0x20
    func_0010a058();  // 10a058                                // 0x0010ead0: jal 0x10a058
    /* FPU: addq.ph $zero, $sp, $t0 */                          // 0x0010ead4: addq.ph $zero, $sp, $t0
    if (v0 != 0) goto label_0x10f3e0;                           // 0x0010ead8: bnez $v0, 0x10f3e0
    /* FPU: aver_u.h $w10, $w0, $w8 */                          // 0x0010eadc: aver_u.h $w10, $w0, $w8
    v0 = s1 & 0x20;                                             // 0x0010eae0: andi $v0, $s1, 0x20
label_0x10eae4:
    if (v0 != 0) goto label_0x10eb50;                           // 0x0010eae4: bnez $v0, 0x10eb50
    v0 = ((unsigned)s0 < (unsigned)5) ? 1 : 0;                  // 0x0010eae8: sltiu $v0, $s0, 5
    goto label_0x10eb30;                                        // 0x0010eaec: b 0x10eb30
    a0 = *(int32_t*)(s2);                                       // 0x0010eaf0: lw $a0, 0($s2)
    /* nop */                                                   // 0x0010eaf4: nop 
    t0 = t0 + 1;                                                // 0x0010eaf8: addiu $t0, $t0, 1
    v0 = v0 + -1;                                               // 0x0010eafc: addiu $v0, $v0, -1
    if (v0 <= 0) goto label_0x10eb18;                           // 0x0010eb00: blez $v0, 0x10eb18
    *(uint32_t*)((s2) + 4) = v0;                                // 0x0010eb04: sw $v0, 4($s2)
    v0 = a0 + 1;                                                // 0x0010eb08: addiu $v0, $a0, 1
    goto label_0x10eb2c;                                        // 0x0010eb0c: b 0x10eb2c
    *(uint32_t*)(s2) = v0;                                      // 0x0010eb10: sw $v0, 0($s2)
    /* nop */                                                   // 0x0010eb14: nop 
label_0x10eb18:
    func_0010a058();  // 10a058                                // 0x0010eb1c: jal 0x10a058
    /* FPU: addq.ph $zero, $sp, $t0 */                          // 0x0010eb20: addq.ph $zero, $sp, $t0
    if (v0 != 0) goto label_0x10f3e0;                           // 0x0010eb24: bnez $v0, 0x10f3e0
    /* FPU: aver_u.h $w10, $w0, $w8 */                          // 0x0010eb28: aver_u.h $w10, $w0, $w8
label_0x10eb2c:
    a0 = *(int32_t*)(s2);                                       // 0x0010eb2c: lw $a0, 0($s2)
label_0x10eb30:
    v1 = g_00220001;  // Global at 0x00220001                   // 0x0010eb30: lbu $v1, 0($a0)
    v0 = 0x22 << 16;                                            // 0x0010eb34: lui $v0, 0x22
    v0 = v0 + v1;                                               // 0x0010eb38: addu $v0, $v0, $v1
    v0 = g_0021ffe9;  // Global at 0x0021ffe9                   // 0x0010eb3c: lbu $v0, -0x17($v0)
    v0 = v0 & 8;                                                // 0x0010eb40: andi $v0, $v0, 8
    /* bnezl $v0, 0x10eaf8 */                                   // 0x0010eb44: bnezl $v0, 0x10eaf8
    v0 = *(int32_t*)((s2) + 4);                                 // 0x0010eb48: lw $v0, 4($s2)
    v0 = ((unsigned)s0 < (unsigned)5) ? 1 : 0;                  // 0x0010eb4c: sltiu $v0, $s0, 5
label_0x10eb50:
    /* beqzl $v0, 0x10e7e4 */                                   // 0x0010eb50: beqzl $v0, 0x10e7e4
    v1 = *(int8_t*)(s5);                                        // 0x0010eb54: lb $v1, 0($s5)
    v0 = s0 << 2;                                               // 0x0010eb58: sll $v0, $s0, 2
    v1 = 0x22 << 16;                                            // 0x0010eb5c: lui $v1, 0x22
    v1 = v1 + v0;                                               // 0x0010eb60: addu $v1, $v1, $v0
    v1 = g_002207d0;  // Global at 0x002207d0                   // 0x0010eb64: lw $v1, 0x7d0($v1)
    /* jump to address in v1 */                                 // 0x0010eb68: jr $v1
    /* nop */                                                   // 0x0010eb6c: nop 
    v0 = 1;                                                     // 0x0010eb70: addiu $v0, $zero, 1
    v1 = s1 & 8;                                                // 0x0010eb74: andi $v1, $s1, 8
    if (v1 == 0) goto label_0x10ebf0;                           // 0x0010eb78: beqz $v1, 0x10ebf0
    if (s4 == 0) s4 = v0;                                       // 0x0010eb7c: movz $s4, $v0, $s4
    /* nop */                                                   // 0x0010eb84: nop 
label_0x10eb88:
    s0 = *(int32_t*)((s2) + 4);                                 // 0x0010eb88: lw $s0, 4($s2)
    v0 = ((unsigned)s0 < (unsigned)s4) ? 1 : 0;                 // 0x0010eb8c: sltu $v0, $s0, $s4
    /* beqzl $v0, 0x10ebd0 */                                   // 0x0010eb90: beqzl $v0, 0x10ebd0
    v1 = *(int32_t*)(s2);                                       // 0x0010eb94: lw $v1, 0($s2)
    v0 = *(int32_t*)(s2);                                       // 0x0010eb98: lw $v0, 0($s2)
    /* FPU: addq.ph $zero, $sp, $t0 */                          // 0x0010eba0: addq.ph $zero, $sp, $t0
    s1 = s1 + s0;                                               // 0x0010eba4: addu $s1, $s1, $s0
    v0 = v0 + s0;                                               // 0x0010eba8: addu $v0, $v0, $s0
    s4 = s4 - s0;                                               // 0x0010ebac: subu $s4, $s4, $s0
    func_0010a058();  // 10a058                                // 0x0010ebb0: jal 0x10a058
    *(uint32_t*)(s2) = v0;                                      // 0x0010ebb4: sw $v0, 0($s2)
    if (v0 == 0) goto label_0x10eb88;                           // 0x0010ebb8: beqz $v0, 0x10eb88
    /* FPU: aver_u.h $w10, $w0, $w8 */                          // 0x0010ebbc: aver_u.h $w10, $w0, $w8
    /* bnezl $s1, 0x10e7e0 */                                   // 0x0010ebc0: bnezl $s1, 0x10e7e0
    t0 = t0 + s1;                                               // 0x0010ebc4: addu $t0, $t0, $s1
    goto label_0x10f3e4;                                        // 0x0010ebc8: b 0x10f3e4
    a0 = local_260;                                             // 0x0010ebcc: lw $a0, 0x260($sp)
    v0 = s0 - s4;                                               // 0x0010ebd0: subu $v0, $s0, $s4
    *(uint32_t*)((s2) + 4) = v0;                                // 0x0010ebd4: sw $v0, 4($s2)
    s1 = s1 + s4;                                               // 0x0010ebd8: addu $s1, $s1, $s4
    v1 = v1 + s4;                                               // 0x0010ebdc: addu $v1, $v1, $s4
    *(uint32_t*)(s2) = v1;                                      // 0x0010ebe0: sw $v1, 0($s2)
    goto label_0x10e7e0;                                        // 0x0010ebe4: b 0x10e7e0
    t0 = t0 + s1;                                               // 0x0010ebe8: addu $t0, $t0, $s1
    /* nop */                                                   // 0x0010ebec: nop 
label_0x10ebf0:
    s7 = s7 + 8;                                                // 0x0010ebf4: addiu $s7, $s7, 8
    a0 = g_00220000;  // Global at 0x00220000                   // 0x0010ebf8: lw $a0, 0($v0)
    a1 = 1;                                                     // 0x0010ec00: addiu $a1, $zero, 1
    func_001057c0();  // 1057c0                                // 0x0010ec08: jal 0x1057c0
    /* FPU: addq.ph $zero, $sp, $t0 */                          // 0x0010ec0c: addq.ph $zero, $sp, $t0
    if (v0 == 0) goto label_0x10f3e0;                           // 0x0010ec10: beqz $v0, 0x10f3e0
    /* FPU: aver_u.h $w10, $w0, $w8 */                          // 0x0010ec14: aver_u.h $w10, $w0, $w8
    t0 = t0 + v0;                                               // 0x0010ec18: addu $t0, $t0, $v0
    v0 = local_260;                                             // 0x0010ec1c: lw $v0, 0x260($sp)
    v0 = v0 + 1;                                                // 0x0010ec20: addiu $v0, $v0, 1
    goto label_0x10e7e0;                                        // 0x0010ec24: b 0x10e7e0
    local_260 = v0;                                             // 0x0010ec28: sw $v0, 0x260($sp)
    /* nop */                                                   // 0x0010ec2c: nop 
    v0 = -1;                                                    // 0x0010ec30: addiu $v0, $zero, -1
    v1 = s1 & 8;                                                // 0x0010ec34: andi $v1, $s1, 8
    if (v1 == 0) goto label_0x10ecb0;                           // 0x0010ec38: beqz $v1, 0x10ecb0
    if (s4 == 0) s4 = v0;                                       // 0x0010ec3c: movz $s4, $v0, $s4
    /* nop */                                                   // 0x0010ec44: nop 
label_0x10ec48:
    a1 = *(int32_t*)(s2);                                       // 0x0010ec48: lw $a1, 0($s2)
label_0x10ec4c:
    v0 = g_002205d8;  // Global at 0x002205d8                   // 0x0010ec4c: lbu $v0, 0($a1)
    v1 = sp + v0;                                               // 0x0010ec50: addu $v1, $sp, $v0
    a0 = g_00220000;  // Global at 0x00220000                   // 0x0010ec54: lb $a0, 0($v1)
    if (a0 == 0) goto label_0x10eca0;                           // 0x0010ec58: beqz $a0, 0x10eca0
    v0 = a1 + 1;                                                // 0x0010ec5c: addiu $v0, $a1, 1
    v1 = *(int32_t*)((s2) + 4);                                 // 0x0010ec60: lw $v1, 4($s2)
    s4 = s4 + -1;                                               // 0x0010ec64: addiu $s4, $s4, -1
    *(uint32_t*)(s2) = v0;                                      // 0x0010ec68: sw $v0, 0($s2)
    v1 = v1 + -1;                                               // 0x0010ec6c: addiu $v1, $v1, -1
    s0 = s0 + 1;                                                // 0x0010ec70: addiu $s0, $s0, 1
    if (s4 == 0) goto label_0x10eca0;                           // 0x0010ec74: beqz $s4, 0x10eca0
    *(uint32_t*)((s2) + 4) = v1;                                // 0x0010ec78: sw $v1, 4($s2)
    if (v1 > 0) goto label_0x10ec4c;                            // 0x0010ec7c: bgtzl $v1, 0x10ec4c
    a1 = *(int32_t*)(s2);                                       // 0x0010ec80: lw $a1, 0($s2)
    func_0010a058();  // 10a058                                // 0x0010ec88: jal 0x10a058
    /* FPU: addq.ph $zero, $sp, $t0 */                          // 0x0010ec8c: addq.ph $zero, $sp, $t0
    if (v0 == 0) goto label_0x10ec48;                           // 0x0010ec90: beqz $v0, 0x10ec48
    /* FPU: aver_u.h $w10, $w0, $w8 */                          // 0x0010ec94: aver_u.h $w10, $w0, $w8
    if (s0 == 0) goto label_0x10f3e4;                           // 0x0010ec98: beqz $s0, 0x10f3e4
    a0 = local_260;                                             // 0x0010ec9c: lw $a0, 0x260($sp)
label_0x10eca0:
    /* bnezl $s0, 0x10e7e0 */                                   // 0x0010eca0: bnezl $s0, 0x10e7e0
    t0 = t0 + s0;                                               // 0x0010eca4: addu $t0, $t0, $s0
    goto label_0x10f3f4;                                        // 0x0010eca8: b 0x10f3f4
    v0 = local_260;                                             // 0x0010ecac: lw $v0, 0x260($sp)
label_0x10ecb0:
    s7 = s7 + 8;                                                // 0x0010ecb4: addiu $s7, $s7, 8
    s3 = g_002205d9;  // Global at 0x002205d9                   // 0x0010ecb8: lw $s3, 0($v0)
label_0x10ecc0:
    a1 = *(int32_t*)(s2);                                       // 0x0010ecc0: lw $a1, 0($s2)
label_0x10ecc4:
    v0 = g_002205d8;  // Global at 0x002205d8                   // 0x0010ecc4: lbu $v0, 0($a1)
    v1 = sp + v0;                                               // 0x0010ecc8: addu $v1, $sp, $v0
    a0 = g_0021ffff;  // Global at 0x0021ffff                   // 0x0010eccc: lb $a0, 0($v1)
    if (a0 == 0) goto label_0x10ed24;                           // 0x0010ecd0: beqz $a0, 0x10ed24
    a0 = a1 + 1;                                                // 0x0010ecd4: addiu $a0, $a1, 1
    v0 = *(int32_t*)((s2) + 4);                                 // 0x0010ecd8: lw $v0, 4($s2)
    s4 = s4 + -1;                                               // 0x0010ecdc: addiu $s4, $s4, -1
    v0 = v0 + -1;                                               // 0x0010ece0: addiu $v0, $v0, -1
    *(uint32_t*)((s2) + 4) = v0;                                // 0x0010ece4: sw $v0, 4($s2)
    v1 = g_002205d8;  // Global at 0x002205d8                   // 0x0010ece8: lbu $v1, 0($a1)
    *(uint8_t*)(s3) = v1;                                       // 0x0010ecec: sb $v1, 0($s3)
    s3 = s3 + 1;                                                // 0x0010ecf0: addiu $s3, $s3, 1
    if (s4 == 0) goto label_0x10ed24;                           // 0x0010ecf4: beqz $s4, 0x10ed24
    *(uint32_t*)(s2) = a0;                                      // 0x0010ecf8: sw $a0, 0($s2)
    v0 = *(int32_t*)((s2) + 4);                                 // 0x0010ecfc: lw $v0, 4($s2)
    if (v0 > 0) goto label_0x10ecc4;                            // 0x0010ed00: bgtzl $v0, 0x10ecc4
    a1 = *(int32_t*)(s2);                                       // 0x0010ed04: lw $a1, 0($s2)
    func_0010a058();  // 10a058                                // 0x0010ed0c: jal 0x10a058
    /* FPU: addq.ph $zero, $sp, $t0 */                          // 0x0010ed10: addq.ph $zero, $sp, $t0
    if (v0 == 0) goto label_0x10ecc0;                           // 0x0010ed14: beqz $v0, 0x10ecc0
    /* FPU: aver_u.h $w10, $w0, $w8 */                          // 0x0010ed18: aver_u.h $w10, $w0, $w8
    if (s3 == s0) goto label_0x10f3e4;                          // 0x0010ed1c: beq $s3, $s0, 0x10f3e4
    a0 = local_260;                                             // 0x0010ed20: lw $a0, 0x260($sp)
label_0x10ed24:
    s0 = s3 - s0;                                               // 0x0010ed24: subu $s0, $s3, $s0
    if (s0 == 0) goto label_0x10f3f4;                           // 0x0010ed28: beqz $s0, 0x10f3f4
    v0 = local_260;                                             // 0x0010ed2c: lw $v0, 0x260($sp)
    *(uint8_t*)(s3) = 0;                                        // 0x0010ed30: sb $zero, 0($s3)
    v1 = local_260;                                             // 0x0010ed34: lw $v1, 0x260($sp)
    v1 = v1 + 1;                                                // 0x0010ed38: addiu $v1, $v1, 1
    goto label_0x10edbc;                                        // 0x0010ed3c: b 0x10edbc
    local_260 = v1;                                             // 0x0010ed40: sw $v1, 0x260($sp)
    /* nop */                                                   // 0x0010ed44: nop 
    v0 = -1;                                                    // 0x0010ed48: addiu $v0, $zero, -1
    v1 = s1 & 8;                                                // 0x0010ed4c: andi $v1, $s1, 8
    if (v1 == 0) goto label_0x10edc8;                           // 0x0010ed50: beqz $v1, 0x10edc8
    if (s4 == 0) s4 = v0;                                       // 0x0010ed54: movz $s4, $v0, $s4
    /* nop */                                                   // 0x0010ed5c: nop 
label_0x10ed60:
    a0 = *(int32_t*)(s2);                                       // 0x0010ed60: lw $a0, 0($s2)
label_0x10ed64:
    v1 = g_002205d9;  // Global at 0x002205d9                   // 0x0010ed64: lbu $v1, 0($a0)
    v0 = 0x22 << 16;                                            // 0x0010ed68: lui $v0, 0x22
    v0 = v0 + v1;                                               // 0x0010ed6c: addu $v0, $v0, $v1
    v0 = g_0021ffe9;  // Global at 0x0021ffe9                   // 0x0010ed70: lbu $v0, -0x17($v0)
    v0 = v0 & 8;                                                // 0x0010ed74: andi $v0, $v0, 8
    /* bnezl $v0, 0x10e7e0 */                                   // 0x0010ed78: bnezl $v0, 0x10e7e0
    t0 = t0 + s0;                                               // 0x0010ed7c: addu $t0, $t0, $s0
    v1 = *(int32_t*)((s2) + 4);                                 // 0x0010ed80: lw $v1, 4($s2)
    v0 = a0 + 1;                                                // 0x0010ed84: addiu $v0, $a0, 1
    s4 = s4 + -1;                                               // 0x0010ed88: addiu $s4, $s4, -1
    *(uint32_t*)(s2) = v0;                                      // 0x0010ed8c: sw $v0, 0($s2)
    v1 = v1 + -1;                                               // 0x0010ed90: addiu $v1, $v1, -1
    s0 = s0 + 1;                                                // 0x0010ed94: addiu $s0, $s0, 1
    if (s4 == 0) goto label_0x10edbc;                           // 0x0010ed98: beqz $s4, 0x10edbc
    *(uint32_t*)((s2) + 4) = v1;                                // 0x0010ed9c: sw $v1, 4($s2)
    if (v1 > 0) goto label_0x10ed64;                            // 0x0010eda0: bgtzl $v1, 0x10ed64
    a0 = *(int32_t*)(s2);                                       // 0x0010eda4: lw $a0, 0($s2)
    func_0010a058();  // 10a058                                // 0x0010edac: jal 0x10a058
    /* FPU: addq.ph $zero, $sp, $t0 */                          // 0x0010edb0: addq.ph $zero, $sp, $t0
    if (v0 == 0) goto label_0x10ed60;                           // 0x0010edb4: beqz $v0, 0x10ed60
    /* FPU: aver_u.h $w10, $w0, $w8 */                          // 0x0010edb8: aver_u.h $w10, $w0, $w8
label_0x10edbc:
    goto label_0x10e7e0;                                        // 0x0010edbc: b 0x10e7e0
    t0 = t0 + s0;                                               // 0x0010edc0: addu $t0, $t0, $s0
    /* nop */                                                   // 0x0010edc4: nop 
label_0x10edc8:
    s7 = s7 + 8;                                                // 0x0010edcc: addiu $s7, $s7, 8
    s3 = g_002205da;  // Global at 0x002205da                   // 0x0010edd0: lw $s3, 0($v0)
label_0x10edd8:
    a1 = *(int32_t*)(s2);                                       // 0x0010edd8: lw $a1, 0($s2)
label_0x10eddc:
    v1 = g_002205d8;  // Global at 0x002205d8                   // 0x0010eddc: lbu $v1, 0($a1)
    v0 = 0x22 << 16;                                            // 0x0010ede0: lui $v0, 0x22
    v0 = v0 + v1;                                               // 0x0010ede4: addu $v0, $v0, $v1
    v0 = g_0021ffe9;  // Global at 0x0021ffe9                   // 0x0010ede8: lbu $v0, -0x17($v0)
    v0 = v0 & 8;                                                // 0x0010edec: andi $v0, $v0, 8
    /* bnezl $v0, 0x10ee44 */                                   // 0x0010edf0: bnezl $v0, 0x10ee44
    *(uint8_t*)(s3) = 0;                                        // 0x0010edf4: sb $zero, 0($s3)
    v0 = *(int32_t*)((s2) + 4);                                 // 0x0010edf8: lw $v0, 4($s2)
    a0 = a1 + 1;                                                // 0x0010edfc: addiu $a0, $a1, 1
    s4 = s4 + -1;                                               // 0x0010ee00: addiu $s4, $s4, -1
    v0 = v0 + -1;                                               // 0x0010ee04: addiu $v0, $v0, -1
    *(uint32_t*)((s2) + 4) = v0;                                // 0x0010ee08: sw $v0, 4($s2)
    v1 = g_002205d8;  // Global at 0x002205d8                   // 0x0010ee0c: lbu $v1, 0($a1)
    *(uint8_t*)(s3) = v1;                                       // 0x0010ee10: sb $v1, 0($s3)
    s3 = s3 + 1;                                                // 0x0010ee14: addiu $s3, $s3, 1
    if (s4 == 0) goto label_0x10ee40;                           // 0x0010ee18: beqz $s4, 0x10ee40
    *(uint32_t*)(s2) = a0;                                      // 0x0010ee1c: sw $a0, 0($s2)
    v0 = *(int32_t*)((s2) + 4);                                 // 0x0010ee20: lw $v0, 4($s2)
    if (v0 > 0) goto label_0x10eddc;                            // 0x0010ee24: bgtzl $v0, 0x10eddc
    a1 = *(int32_t*)(s2);                                       // 0x0010ee28: lw $a1, 0($s2)
    func_0010a058();  // 10a058                                // 0x0010ee30: jal 0x10a058
    /* FPU: addq.ph $zero, $sp, $t0 */                          // 0x0010ee34: addq.ph $zero, $sp, $t0
    if (v0 == 0) goto label_0x10edd8;                           // 0x0010ee38: beqz $v0, 0x10edd8
    /* FPU: aver_u.h $w10, $w0, $w8 */                          // 0x0010ee3c: aver_u.h $w10, $w0, $w8
label_0x10ee40:
    *(uint8_t*)(s3) = 0;                                        // 0x0010ee40: sb $zero, 0($s3)
    v0 = s3 - s0;                                               // 0x0010ee44: subu $v0, $s3, $s0
    t0 = t0 + v0;                                               // 0x0010ee48: addu $t0, $t0, $v0
    a0 = local_260;                                             // 0x0010ee4c: lw $a0, 0x260($sp)
    a0 = a0 + 1;                                                // 0x0010ee50: addiu $a0, $a0, 1
    goto label_0x10e7e0;                                        // 0x0010ee54: b 0x10e7e0
    local_260 = a0;                                             // 0x0010ee58: sw $a0, 0x260($sp)
    /* nop */                                                   // 0x0010ee5c: nop 
    s4 = s4 + -1;                                               // 0x0010ee60: addiu $s4, $s4, -1
    v1 = 0x15c;                                                 // 0x0010ee64: addiu $v1, $zero, 0x15c
    v0 = ((unsigned)s4 < (unsigned)0x15d) ? 1 : 0;              // 0x0010ee68: sltiu $v0, $s4, 0x15d
    s1 = s1 | 0x2c0;                                            // 0x0010ee6c: ori $s1, $s1, 0x2c0
    if (v0 == 0) s4 = v1;                                       // 0x0010ee70: movz $s4, $v1, $v0
    v0 = sp + 0x100;                                            // 0x0010ee74: addiu $v0, $sp, 0x100
    s4 = s4 + 1;                                                // 0x0010ee78: addiu $s4, $s4, 1
    if (s4 == 0) goto label_0x10efc0;                           // 0x0010ee7c: beqz $s4, 0x10efc0
    v0 = *(int32_t*)(s2);                                       // 0x0010ee84: lw $v0, 0($s2)
    s0 = g_0021ffff;  // Global at 0x0021ffff                   // 0x0010ee88: lbu $s0, 0($v0)
    v1 = s0 + -0x2b;                                            // 0x0010ee8c: addiu $v1, $s0, -0x2b
    v0 = ((unsigned)v1 < (unsigned)0x4e) ? 1 : 0;               // 0x0010ee90: sltiu $v0, $v1, 0x4e
    if (v0 == 0) goto label_0x10efc4;                           // 0x0010ee94: beqz $v0, 0x10efc4
    v0 = s1 & 0x80;                                             // 0x0010ee98: andi $v0, $s1, 0x80
    v0 = v1 << 2;                                               // 0x0010ee9c: sll $v0, $v1, 2
    v1 = 0x22 << 16;                                            // 0x0010eea0: lui $v1, 0x22
    v1 = v1 + v0;                                               // 0x0010eea4: addu $v1, $v1, $v0
    v1 = g_002207f0;  // Global at 0x002207f0                   // 0x0010eea8: lw $v1, 0x7f0($v1)
    /* jump to address in v1 */                                 // 0x0010eeac: jr $v1
    /* nop */                                                   // 0x0010eeb0: nop 
    /* nop */                                                   // 0x0010eeb4: nop 
    if (fp != 0) goto label_0x10eecc;                           // 0x0010eeb8: bnez $fp, 0x10eecc
    v0 = s1 & 0x200;                                            // 0x0010eebc: andi $v0, $s1, 0x200
    fp = 8;                                                     // 0x0010eec0: addiu $fp, $zero, 8
    s1 = s1 | 0x100;                                            // 0x0010eec4: ori $s1, $s1, 0x100
    v0 = s1 & 0x200;                                            // 0x0010eec8: andi $v0, $s1, 0x200
label_0x10eecc:
    /* beqzl $v0, 0x10ef74 */                                   // 0x0010eecc: beqzl $v0, 0x10ef74
    v0 = -0x1c1;                                                // 0x0010eed0: addiu $v0, $zero, -0x1c1
    goto label_0x10ef74;                                        // 0x0010eed4: b 0x10ef74
    v0 = -0x2c1;                                                // 0x0010eed8: addiu $v0, $zero, -0x2c1
    /* nop */                                                   // 0x0010eedc: nop 
    v0 = fp << 1;                                               // 0x0010eee0: sll $v0, $fp, 1
    v1 = -0x1c1;                                                // 0x0010eee4: addiu $v1, $zero, -0x1c1
    fp = 0x22 << 16;                                            // 0x0010eee8: lui $fp, 0x22
    fp = fp + v0;                                               // 0x0010eeec: addu $fp, $fp, $v0
    fp = g_002205b0;  // Global at 0x002205b0                   // 0x0010eef0: lh $fp, 0x5b0($fp)
    goto label_0x10ef78;                                        // 0x0010eef4: b 0x10ef78
    s1 = s1 & v1;                                               // 0x0010eef8: and $s1, $s1, $v1
    /* nop */                                                   // 0x0010eefc: nop 
    v0 = fp << 1;                                               // 0x0010ef00: sll $v0, $fp, 1
    fp = 0x22 << 16;                                            // 0x0010ef04: lui $fp, 0x22
    fp = fp + v0;                                               // 0x0010ef08: addu $fp, $fp, $v0
    fp = g_002205b0;  // Global at 0x002205b0                   // 0x0010ef0c: lh $fp, 0x5b0($fp)
    v1 = (fp < 9) ? 1 : 0;                                      // 0x0010ef10: slti $v1, $fp, 9
    /* bnezl $v1, 0x10efc4 */                                   // 0x0010ef14: bnezl $v1, 0x10efc4
    v0 = s1 & 0x80;                                             // 0x0010ef18: andi $v0, $s1, 0x80
    goto label_0x10ef74;                                        // 0x0010ef1c: b 0x10ef74
    v0 = -0x1c1;                                                // 0x0010ef20: addiu $v0, $zero, -0x1c1
    /* nop */                                                   // 0x0010ef24: nop 
    v0 = (fp < 0xb) ? 1 : 0;                                    // 0x0010ef28: slti $v0, $fp, 0xb
    /* bnezl $v0, 0x10efc4 */                                   // 0x0010ef2c: bnezl $v0, 0x10efc4
    v0 = s1 & 0x80;                                             // 0x0010ef30: andi $v0, $s1, 0x80
    goto label_0x10ef74;                                        // 0x0010ef34: b 0x10ef74
    v0 = -0x1c1;                                                // 0x0010ef38: addiu $v0, $zero, -0x1c1
    /* nop */                                                   // 0x0010ef3c: nop 
    v0 = s1 & 0x40;                                             // 0x0010ef40: andi $v0, $s1, 0x40
    if (v0 == 0) goto label_0x10efc0;                           // 0x0010ef44: beqz $v0, 0x10efc0
    v0 = -0x41;                                                 // 0x0010ef48: addiu $v0, $zero, -0x41
    goto label_0x10ef78;                                        // 0x0010ef4c: b 0x10ef78
    s1 = s1 & v0;                                               // 0x0010ef50: and $s1, $s1, $v0
    /* nop */                                                   // 0x0010ef54: nop 
    v0 = s1 & 0x100;                                            // 0x0010ef58: andi $v0, $s1, 0x100
    if (v0 == 0) goto label_0x10efc0;                           // 0x0010ef5c: beqz $v0, 0x10efc0
    v0 = sp + 0x101;                                            // 0x0010ef60: addiu $v0, $sp, 0x101
    if (s3 != v0) goto label_0x10efc4;                          // 0x0010ef64: bne $s3, $v0, 0x10efc4
    v0 = s1 & 0x80;                                             // 0x0010ef68: andi $v0, $s1, 0x80
    v0 = -0x101;                                                // 0x0010ef6c: addiu $v0, $zero, -0x101
    fp = 0x10;                                                  // 0x0010ef70: addiu $fp, $zero, 0x10
label_0x10ef74:
    s1 = s1 & v0;                                               // 0x0010ef74: and $s1, $s1, $v0
label_0x10ef78:
    *(uint8_t*)(s3) = s0;                                       // 0x0010ef78: sb $s0, 0($s3)
    s3 = s3 + 1;                                                // 0x0010ef7c: addiu $s3, $s3, 1
    v0 = *(int32_t*)((s2) + 4);                                 // 0x0010ef80: lw $v0, 4($s2)
    v0 = v0 + -1;                                               // 0x0010ef84: addiu $v0, $v0, -1
    if (v0 <= 0) goto label_0x10efa0;                           // 0x0010ef88: blez $v0, 0x10efa0
    *(uint32_t*)((s2) + 4) = v0;                                // 0x0010ef8c: sw $v0, 4($s2)
    v0 = *(int32_t*)(s2);                                       // 0x0010ef90: lw $v0, 0($s2)
    v0 = v0 + 1;                                                // 0x0010ef94: addiu $v0, $v0, 1
    goto label_0x10efb4;                                        // 0x0010ef98: b 0x10efb4
    *(uint32_t*)(s2) = v0;                                      // 0x0010ef9c: sw $v0, 0($s2)
label_0x10efa0:
    func_0010a058();  // 10a058                                // 0x0010efa4: jal 0x10a058
    /* FPU: addq.ph $zero, $sp, $t0 */                          // 0x0010efa8: addq.ph $zero, $sp, $t0
    if (v0 != 0) goto label_0x10efc0;                           // 0x0010efac: bnez $v0, 0x10efc0
    /* FPU: aver_u.h $w10, $w0, $w8 */                          // 0x0010efb0: aver_u.h $w10, $w0, $w8
label_0x10efb4:
    s4 = s4 + -1;                                               // 0x0010efb4: addiu $s4, $s4, -1
    /* bnezl $s4, 0x10ee88 */                                   // 0x0010efb8: bnezl $s4, 0x10ee88
    v0 = *(int32_t*)(s2);                                       // 0x0010efbc: lw $v0, 0($s2)
label_0x10efc0:
    v0 = s1 & 0x80;                                             // 0x0010efc0: andi $v0, $s1, 0x80
label_0x10efc4:
    /* beqzl $v0, 0x10eff0 */                                   // 0x0010efc4: beqzl $v0, 0x10eff0
    s0 = *(int8_t*)((s3) + -1);                                 // 0x0010efc8: lb $s0, -1($s3)
    v1 = sp + 0x100;                                            // 0x0010efcc: addiu $v1, $sp, 0x100
    v0 = ((unsigned)v1 < (unsigned)s3) ? 1 : 0;                 // 0x0010efd0: sltu $v0, $v1, $s3
    /* beqzl $v0, 0x10f3f4 */                                   // 0x0010efd4: beqzl $v0, 0x10f3f4
    v0 = local_260;                                             // 0x0010efd8: lw $v0, 0x260($sp)
    a0 = *(int8_t*)((s3) + -1);                                 // 0x0010efdc: lb $a0, -1($s3)
    func_0010cb88();  // 10cb88                                // 0x0010efe0: jal 0x10cb88
    goto label_0x10f3f4;                                        // 0x0010efe8: b 0x10f3f4
    v0 = local_260;                                             // 0x0010efec: lw $v0, 0x260($sp)
    v0 = 0x78;                                                  // 0x0010eff0: addiu $v0, $zero, 0x78
    if (s0 == v0) goto label_0x10f004;                          // 0x0010eff4: beq $s0, $v0, 0x10f004
    v0 = 0x58;                                                  // 0x0010eff8: addiu $v0, $zero, 0x58
    if (s0 != v0) goto label_0x10f020;                          // 0x0010effc: bne $s0, $v0, 0x10f020
    v0 = s1 & 8;                                                // 0x0010f000: andi $v0, $s1, 8
label_0x10f004:
    func_0010cb88();  // 10cb88                                // 0x0010f00c: jal 0x10cb88
    /* FPU: addq.ph $zero, $sp, $t0 */                          // 0x0010f010: addq.ph $zero, $sp, $t0
    /* FPU: aver_u.h $w10, $w0, $w8 */                          // 0x0010f014: aver_u.h $w10, $w0, $w8
    s3 = s3 + -1;                                               // 0x0010f018: addiu $s3, $s3, -1
    v0 = s1 & 8;                                                // 0x0010f01c: andi $v0, $s1, 8
label_0x10f020:
    if (v0 != 0) goto label_0x10f0d8;                           // 0x0010f020: bnez $v0, 0x10f0d8
    v1 = sp + 0x100;                                            // 0x0010f024: addiu $v1, $sp, 0x100
    *(uint8_t*)(s3) = 0;                                        // 0x0010f028: sb $zero, 0($s3)
    v0 = sp + 0x100;                                            // 0x0010f02c: addiu $v0, $sp, 0x100
    /* FPU: addq.ph $zero, $sp, $t0 */                          // 0x0010f030: addq.ph $zero, $sp, $t0
    v1 = local_264;                                             // 0x0010f038: lw $v1, 0x264($sp)
    /* call function at address in v1 */                        // 0x0010f040: jalr $v1
    v0 = s1 & 0x10;                                             // 0x0010f04c: andi $v0, $s1, 0x10
    if (v0 == 0) goto label_0x10f078;                           // 0x0010f050: beqz $v0, 0x10f078
    /* FPU: aver_u.h $w10, $w0, $w8 */                          // 0x0010f054: aver_u.h $w10, $w0, $w8
    s7 = s7 + 8;                                                // 0x0010f05c: addiu $s7, $s7, 8
    a0 = g_0021ffff;  // Global at 0x0021ffff                   // 0x0010f060: lw $a0, 0($v0)
    goto label_0x10f0c8;                                        // 0x0010f06c: b 0x10f0c8
    g_002205da = v1;  // Global at 0x002205da                   // 0x0010f070: sw $v1, 0($a0)
    /* nop */                                                   // 0x0010f074: nop 
label_0x10f078:
    v0 = s1 & 4;                                                // 0x0010f078: andi $v0, $s1, 4
    if (v0 == 0) goto label_0x10f098;                           // 0x0010f07c: beqz $v0, 0x10f098
    s7 = s7 + 8;                                                // 0x0010f084: addiu $s7, $s7, 8
    v1 = g_00220000;  // Global at 0x00220000                   // 0x0010f088: lw $v1, 0($v1)
    v0 = a1 & 0xffff;                                           // 0x0010f08c: andi $v0, $a1, 0xffff
    goto label_0x10f0c8;                                        // 0x0010f090: b 0x10f0c8
    g_00220000 = v0;  // Global at 0x00220000                   // 0x0010f094: sh $v0, 0($v1)
label_0x10f098:
    v0 = s1 & 1;                                                // 0x0010f098: andi $v0, $s1, 1
    /* beqzl $v0, 0x10f0b8 */                                   // 0x0010f09c: beqzl $v0, 0x10f0b8
    s7 = s7 + 8;                                                // 0x0010f0a0: addiu $s7, $s7, 8
    s7 = s7 + 8;                                                // 0x0010f0a8: addiu $s7, $s7, 8
    v0 = g_0021ffff;  // Global at 0x0021ffff                   // 0x0010f0ac: lw $v0, 0($v0)
    goto label_0x10f0c8;                                        // 0x0010f0b0: b 0x10f0c8
    v1 = g_00220000;  // Global at 0x00220000                   // 0x0010f0b8: lw $v1, 0($v1)
    g_00220000 = v0;  // Global at 0x00220000                   // 0x0010f0c4: sw $v0, 0($v1)
label_0x10f0c8:
    a0 = local_260;                                             // 0x0010f0c8: lw $a0, 0x260($sp)
    a0 = a0 + 1;                                                // 0x0010f0cc: addiu $a0, $a0, 1
    local_260 = a0;                                             // 0x0010f0d0: sw $a0, 0x260($sp)
    v1 = sp + 0x100;                                            // 0x0010f0d4: addiu $v1, $sp, 0x100
label_0x10f0d8:
    v0 = s3 - v1;                                               // 0x0010f0d8: subu $v0, $s3, $v1
    goto label_0x10e7e0;                                        // 0x0010f0dc: b 0x10e7e0
    t0 = t0 + v0;                                               // 0x0010f0e0: addu $t0, $t0, $v0
    /* nop */                                                   // 0x0010f0e4: nop 
    s4 = s4 + -1;                                               // 0x0010f0e8: addiu $s4, $s4, -1
    v1 = 0x15c;                                                 // 0x0010f0ec: addiu $v1, $zero, 0x15c
    v0 = ((unsigned)s4 < (unsigned)0x15d) ? 1 : 0;              // 0x0010f0f0: sltiu $v0, $s4, 0x15d
    a0 = sp + 0x100;                                            // 0x0010f0f4: addiu $a0, $sp, 0x100
    if (v0 == 0) s4 = v1;                                       // 0x0010f0f8: movz $s4, $v1, $v0
    s1 = s1 | 0x3c0;                                            // 0x0010f0fc: ori $s1, $s1, 0x3c0
    s4 = s4 + 1;                                                // 0x0010f100: addiu $s4, $s4, 1
    if (s4 == 0) goto label_0x10f234;                           // 0x0010f10c: beqz $s4, 0x10f234
    v0 = *(int32_t*)(s2);                                       // 0x0010f114: lw $v0, 0($s2)
    s0 = g_0021ffff;  // Global at 0x0021ffff                   // 0x0010f118: lbu $s0, 0($v0)
    v1 = s0 + -0x2b;                                            // 0x0010f11c: addiu $v1, $s0, -0x2b
    v0 = ((unsigned)v1 < (unsigned)0x3b) ? 1 : 0;               // 0x0010f120: sltiu $v0, $v1, 0x3b
    if (v0 == 0) goto label_0x10f234;                           // 0x0010f124: beqz $v0, 0x10f234
    v0 = v1 << 2;                                               // 0x0010f128: sll $v0, $v1, 2
    v1 = 0x22 << 16;                                            // 0x0010f12c: lui $v1, 0x22
    v1 = v1 + v0;                                               // 0x0010f130: addu $v1, $v1, $v0
    v1 = g_00220930;  // Global at 0x00220930                   // 0x0010f134: lw $v1, 0x930($v1)
    /* jump to address in v1 */                                 // 0x0010f138: jr $v1
    /* nop */                                                   // 0x0010f13c: nop 
    v0 = s1 & 0x80;                                             // 0x0010f140: andi $v0, $s1, 0x80
    if (v0 == 0) goto label_0x10f158;                           // 0x0010f144: beqz $v0, 0x10f158
    v0 = -0x41;                                                 // 0x0010f148: addiu $v0, $zero, -0x41
    goto label_0x10f1ec;                                        // 0x0010f150: b 0x10f1ec
    s1 = s1 & v0;                                               // 0x0010f154: and $s1, $s1, $v0
label_0x10f158:
    v0 = -0xc1;                                                 // 0x0010f158: addiu $v0, $zero, -0xc1
    goto label_0x10f1e0;                                        // 0x0010f15c: b 0x10f1e0
    s1 = s1 & v0;                                               // 0x0010f160: and $s1, $s1, $v0
    /* nop */                                                   // 0x0010f164: nop 
    v0 = s1 & 0x40;                                             // 0x0010f168: andi $v0, $s1, 0x40
    if (v0 == 0) goto label_0x10f234;                           // 0x0010f16c: beqz $v0, 0x10f234
    v0 = -0x41;                                                 // 0x0010f170: addiu $v0, $zero, -0x41
    goto label_0x10f1e0;                                        // 0x0010f174: b 0x10f1e0
    s1 = s1 & v0;                                               // 0x0010f178: and $s1, $s1, $v0
    /* nop */                                                   // 0x0010f17c: nop 
    v0 = s1 & 0x100;                                            // 0x0010f180: andi $v0, $s1, 0x100
    if (v0 == 0) goto label_0x10f234;                           // 0x0010f184: beqz $v0, 0x10f234
    v0 = -0x141;                                                // 0x0010f188: addiu $v0, $zero, -0x141
    goto label_0x10f1e0;                                        // 0x0010f190: b 0x10f1e0
    s1 = s1 & v0;                                               // 0x0010f194: and $s1, $s1, $v0
    v1 = s1 & 0x280;                                            // 0x0010f198: andi $v1, $s1, 0x280
    v0 = 0x200;                                                 // 0x0010f19c: addiu $v0, $zero, 0x200
    if (v1 == v0) goto label_0x10f1b8;                          // 0x0010f1a0: beq $v1, $v0, 0x10f1b8
    v0 = s1 & 0x200;                                            // 0x0010f1a4: andi $v0, $s1, 0x200
    if (v0 == 0) goto label_0x10f234;                           // 0x0010f1a8: beqz $v0, 0x10f234
    /* nop */                                                   // 0x0010f1ac: nop 
    if (s6 == 0) goto label_0x10f244;                           // 0x0010f1b0: beqz $s6, 0x10f244
    v0 = s1 & 0x80;                                             // 0x0010f1b4: andi $v0, $s1, 0x80
label_0x10f1b8:
    v0 = s1 & 0x100;                                            // 0x0010f1b8: andi $v0, $s1, 0x100
    if (v0 != 0) goto label_0x10f1d4;                           // 0x0010f1bc: bnez $v0, 0x10f1d4
    v0 = -0x301;                                                // 0x0010f1c0: addiu $v0, $zero, -0x301
    local_270 = s3;                                             // 0x0010f1c8: sw $s3, 0x270($sp)
    v0 = -0x301;                                                // 0x0010f1d0: addiu $v0, $zero, -0x301
label_0x10f1d4:
    v0 = s1 & v0;                                               // 0x0010f1d8: and $v0, $s1, $v0
    s1 = v0 | 0xc0;                                             // 0x0010f1dc: ori $s1, $v0, 0xc0
label_0x10f1e0:
    *(uint8_t*)(s3) = s0;                                       // 0x0010f1e0: sb $s0, 0($s3)
    s3 = s3 + 1;                                                // 0x0010f1e4: addiu $s3, $s3, 1
    s4 = s4 + -1;                                               // 0x0010f1e8: addiu $s4, $s4, -1
label_0x10f1ec:
    v0 = *(int32_t*)((s2) + 4);                                 // 0x0010f1ec: lw $v0, 4($s2)
    t0 = t0 + 1;                                                // 0x0010f1f0: addiu $t0, $t0, 1
    v0 = v0 + -1;                                               // 0x0010f1f4: addiu $v0, $v0, -1
    if (v0 <= 0) goto label_0x10f210;                           // 0x0010f1f8: blez $v0, 0x10f210
    *(uint32_t*)((s2) + 4) = v0;                                // 0x0010f1fc: sw $v0, 4($s2)
    v0 = *(int32_t*)(s2);                                       // 0x0010f200: lw $v0, 0($s2)
    v0 = v0 + 1;                                                // 0x0010f204: addiu $v0, $v0, 1
    goto label_0x10f22c;                                        // 0x0010f208: b 0x10f22c
    *(uint32_t*)(s2) = v0;                                      // 0x0010f20c: sw $v0, 0($s2)
label_0x10f210:
    func_0010a058();  // 10a058                                // 0x0010f218: jal 0x10a058
    /* FPU: addq.ph $zero, $sp, $t0 */                          // 0x0010f21c: addq.ph $zero, $sp, $t0
    /* FPU: xori.b $w10, $w0, 0xa7 */                           // 0x0010f220: xori.b $w10, $w0, 0xa7
    if (v0 != 0) goto label_0x10f234;                           // 0x0010f224: bnez $v0, 0x10f234
    /* FPU: aver_u.h $w10, $w0, $w8 */                          // 0x0010f228: aver_u.h $w10, $w0, $w8
label_0x10f22c:
    /* bnezl $s4, 0x10f118 */                                   // 0x0010f22c: bnezl $s4, 0x10f118
    v0 = *(int32_t*)(s2);                                       // 0x0010f230: lw $v0, 0($s2)
label_0x10f234:
    if (s6 == 0) goto label_0x10f240;                           // 0x0010f234: beqz $s6, 0x10f240
    v0 = -0x81;                                                 // 0x0010f238: addiu $v0, $zero, -0x81
    s1 = s1 & v0;                                               // 0x0010f23c: and $s1, $s1, $v0
label_0x10f240:
    v0 = s1 & 0x80;                                             // 0x0010f240: andi $v0, $s1, 0x80
label_0x10f244:
    if (v0 == 0) goto label_0x10f2ec;                           // 0x0010f244: beqz $v0, 0x10f2ec
    v0 = s1 & 0x200;                                            // 0x0010f248: andi $v0, $s1, 0x200
    /* beqzl $v0, 0x10f290 */                                   // 0x0010f24c: beqzl $v0, 0x10f290
    s3 = s3 + -1;                                               // 0x0010f250: addiu $s3, $s3, -1
    v1 = sp + 0x100;                                            // 0x0010f254: addiu $v1, $sp, 0x100
    v0 = ((unsigned)v1 < (unsigned)s3) ? 1 : 0;                 // 0x0010f258: sltu $v0, $v1, $s3
    if (v0 == 0) goto label_0x10f3f4;                           // 0x0010f25c: beqz $v0, 0x10f3f4
    v0 = local_260;                                             // 0x0010f260: lw $v0, 0x260($sp)
    s3 = s3 + -1;                                               // 0x0010f264: addiu $s3, $s3, -1
label_0x10f268:
    func_0010cb88();  // 10cb88                                // 0x0010f26c: jal 0x10cb88
    a0 = *(int8_t*)(s3);                                        // 0x0010f270: lb $a0, 0($s3)
    a0 = sp + 0x100;                                            // 0x0010f274: addiu $a0, $sp, 0x100
    v1 = ((unsigned)a0 < (unsigned)s3) ? 1 : 0;                 // 0x0010f278: sltu $v1, $a0, $s3
    if (v1 != 0) goto label_0x10f268;                           // 0x0010f27c: bnez $v1, 0x10f268
    s3 = s3 + -1;                                               // 0x0010f280: addiu $s3, $s3, -1
    goto label_0x10f3f4;                                        // 0x0010f284: b 0x10f3f4
    v0 = local_260;                                             // 0x0010f288: lw $v0, 0x260($sp)
    /* nop */                                                   // 0x0010f28c: nop 
    v0 = 0x65;                                                  // 0x0010f290: addiu $v0, $zero, 0x65
    s0 = *(int8_t*)(s3);                                        // 0x0010f294: lb $s0, 0($s3)
    if (s0 == v0) goto label_0x10f2d0;                          // 0x0010f298: beq $s0, $v0, 0x10f2d0
    t0 = t0 + -1;                                               // 0x0010f29c: addiu $t0, $t0, -1
    v0 = 0x45;                                                  // 0x0010f2a0: addiu $v0, $zero, 0x45
    if (s0 == v0) goto label_0x10f2d0;                          // 0x0010f2a4: beq $s0, $v0, 0x10f2d0
    s3 = s3 + -1;                                               // 0x0010f2b4: addiu $s3, $s3, -1
    func_0010cb88();  // 10cb88                                // 0x0010f2b8: jal 0x10cb88
    /* FPU: addq.ph $zero, $sp, $t0 */                          // 0x0010f2bc: addq.ph $zero, $sp, $t0
    /* FPU: aver_u.h $w10, $w0, $w8 */                          // 0x0010f2c0: aver_u.h $w10, $w0, $w8
    s0 = *(int8_t*)(s3);                                        // 0x0010f2c4: lb $s0, 0($s3)
    /* FPU: xori.b $w10, $w0, 0xa7 */                           // 0x0010f2c8: xori.b $w10, $w0, 0xa7
    t0 = t0 + -1;                                               // 0x0010f2cc: addiu $t0, $t0, -1
label_0x10f2d0:
    func_0010cb88();  // 10cb88                                // 0x0010f2dc: jal 0x10cb88
    /* FPU: addq.ph $zero, $sp, $t0 */                          // 0x0010f2e0: addq.ph $zero, $sp, $t0
    /* FPU: aver_u.h $w10, $w0, $w8 */                          // 0x0010f2e4: aver_u.h $w10, $w0, $w8
    /* FPU: xori.b $w10, $w0, 0xa7 */                           // 0x0010f2e8: xori.b $w10, $w0, 0xa7
label_0x10f2ec:
    v0 = s1 & 8;                                                // 0x0010f2ec: andi $v0, $s1, 8
    /* bnezl $v0, 0x10e7e4 */                                   // 0x0010f2f0: bnezl $v0, 0x10e7e4
    v1 = *(int8_t*)(s5);                                        // 0x0010f2f4: lb $v1, 0($s5)
    v1 = s1 & 0x300;                                            // 0x0010f2f8: andi $v1, $s1, 0x300
    v0 = 0x200;                                                 // 0x0010f2fc: addiu $v0, $zero, 0x200
    if (v1 != v0) goto label_0x10f320;                          // 0x0010f300: bne $v1, $v0, 0x10f320
    *(uint8_t*)(s3) = 0;                                        // 0x0010f304: sb $zero, 0($s3)
    local_270 = s3;                                             // 0x0010f30c: sw $s3, 0x270($sp)
    goto label_0x10f344;                                        // 0x0010f314: b 0x10f344
    /* nop */                                                   // 0x0010f31c: nop 
label_0x10f320:
    if (a3 == 0) goto label_0x10f374;                           // 0x0010f320: beqz $a3, 0x10f374
    v1 = local_270;                                             // 0x0010f324: lw $v1, 0x270($sp)
    a0 = v1 + 1;                                                // 0x0010f32c: addiu $a0, $v1, 1
    func_001037b0();  // 1037b0                                // 0x0010f330: jal 0x1037b0
    /* FPU: addq.ph $zero, $sp, $t0 */                          // 0x0010f334: addq.ph $zero, $sp, $t0
    /* FPU: xori.b $w10, $w0, 0xa7 */                           // 0x0010f338: xori.b $w10, $w0, 0xa7
    /* FPU: aver_u.h $w10, $w0, $w8 */                          // 0x0010f33c: aver_u.h $w10, $w0, $w8
label_0x10f344:
    if (a3 == 0) goto label_0x10f374;                           // 0x0010f344: beqz $a3, 0x10f374
    v0 = sp + 0x249;                                            // 0x0010f348: addiu $v0, $sp, 0x249
    a0 = local_270;                                             // 0x0010f34c: lw $a0, 0x270($sp)
    v1 = sp + 0x248;                                            // 0x0010f350: addiu $v1, $sp, 0x248
    a1 = 0x22 << 16;                                            // 0x0010f354: lui $a1, 0x22
    v0 = ((unsigned)a0 < (unsigned)v0) ? 1 : 0;                 // 0x0010f358: sltu $v0, $a0, $v0
    a1 = a1 + 0x5d8;                                            // 0x0010f35c: addiu $a1, $a1, 0x5d8
    if (v0 == 0) a0 = v1;                                       // 0x0010f360: movz $a0, $v1, $v0
    /* FPU: addq.ph $zero, $sp, $t0 */                          // 0x0010f364: addq.ph $zero, $sp, $t0
    func_0010a4d8();  // 10a4d8                                // 0x0010f368: jal 0x10a4d8
    local_270 = a0;                                             // 0x0010f36c: sw $a0, 0x270($sp)
    /* FPU: aver_u.h $w10, $w0, $w8 */                          // 0x0010f370: aver_u.h $w10, $w0, $w8
label_0x10f374:
    v0 = sp + 0x100;                                            // 0x0010f374: addiu $v0, $sp, 0x100
    /* FPU: addq.ph $zero, $sp, $t0 */                          // 0x0010f378: addq.ph $zero, $sp, $t0
    func_00103770();  // 103770                                // 0x0010f37c: jal 0x103770
    v0 = s1 & 1;                                                // 0x0010f388: andi $v0, $s1, 1
    if (v0 != 0) goto label_0x10f3a0;                           // 0x0010f38c: bnez $v0, 0x10f3a0
    /* FPU: aver_u.h $w10, $w0, $w8 */                          // 0x0010f390: aver_u.h $w10, $w0, $w8
    v0 = s1 & 2;                                                // 0x0010f394: andi $v0, $s1, 2
    /* beqzl $v0, 0x10f3b8 */                                   // 0x0010f398: beqzl $v0, 0x10f3b8
label_0x10f3a0:
    v0 = g_00220000;  // Global at 0x00220000                   // 0x0010f3a4: lw $v0, 0($v1)
    goto label_0x10f3d0;                                        // 0x0010f3ac: b 0x10f3d0
    s7 = s7 + 8;                                                // 0x0010f3b0: addiu $s7, $s7, 8
    /* nop */                                                   // 0x0010f3b4: nop 
    s7 = s7 + 8;                                                // 0x0010f3b8: addiu $s7, $s7, 8
    s0 = g_0021ffff;  // Global at 0x0021ffff                   // 0x0010f3bc: lw $s0, 0($v0)
    func_00112118();  // 112118                                // 0x0010f3c0: jal 0x112118
    /* FPU: addq.ph $zero, $sp, $t0 */                          // 0x0010f3c4: addq.ph $zero, $sp, $t0
    *(float*)(s0) = FPU_F0;  // Store float                     // 0x0010f3c8: swc1 $f0, 0($s0)
    /* FPU: aver_u.h $w10, $w0, $w8 */                          // 0x0010f3cc: aver_u.h $w10, $w0, $w8
label_0x10f3d0:
    v1 = local_260;                                             // 0x0010f3d0: lw $v1, 0x260($sp)
    v1 = v1 + 1;                                                // 0x0010f3d4: addiu $v1, $v1, 1
    goto label_0x10e7e0;                                        // 0x0010f3d8: b 0x10e7e0
    local_260 = v1;                                             // 0x0010f3dc: sw $v1, 0x260($sp)
label_0x10f3e0:
    a0 = local_260;                                             // 0x0010f3e0: lw $a0, 0x260($sp)
label_0x10f3e4:
    v0 = -1;                                                    // 0x0010f3e4: addiu $v0, $zero, -1
    goto label_0x10f3f4;                                        // 0x0010f3e8: b 0x10f3f4
    if (a0 != 0) v0 = a0;                                       // 0x0010f3ec: movn $v0, $a0, $a0
label_0x10f3f0:
    v0 = local_260;                                             // 0x0010f3f0: lw $v0, 0x260($sp)
label_0x10f3f4:
    return;                                                     // 0x0010f41c: jr $ra
    sp = sp + 0x2f0;                                            // 0x0010f420: addiu $sp, $sp, 0x2f0
}