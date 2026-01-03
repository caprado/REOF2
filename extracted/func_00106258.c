void func_00106258() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00106258: addiu $sp, $sp, -0x10
    v1 = *(int32_t*)((s0) + 0x54);                              // 0x00106268: lw $v1, 0x54($s0)
    /* bnezl $v1, 0x106288 */                                   // 0x0010626c: bnezl $v1, 0x106288
    v0 = *(int32_t*)((v1) + 0x38);                              // 0x00106270: lw $v0, 0x38($v1)
    v0 = 0x1f << 16;                                            // 0x00106274: lui $v0, 0x1f
    v1 = g_001efdf0;  // Global at 0x001efdf0                   // 0x00106278: lw $v1, -0x210($v0)
    *(uint32_t*)((s0) + 0x54) = v1;                             // 0x0010627c: sw $v1, 0x54($s0)
    v0 = *(int32_t*)((v1) + 0x38);                              // 0x00106280: lw $v0, 0x38($v1)
    /* nop */                                                   // 0x00106284: nop 
    /* bnezl $v0, 0x10629c */                                   // 0x00106288: bnezl $v0, 0x10629c
    v0 = *(int32_t*)((s0) + 0x28);                              // 0x0010628c: lw $v0, 0x28($s0)
    func_00105518();  // 105518                                // 0x00106290: jal 0x105518
    v0 = *(int32_t*)((s0) + 0x28);                              // 0x00106298: lw $v0, 0x28($s0)
    if (v0 != 0) goto label_0x1062b8;                           // 0x0010629c: bnez $v0, 0x1062b8
    v1 = 0x1d;                                                  // 0x001062a0: addiu $v1, $zero, 0x1d
    a0 = *(int32_t*)((s0) + 0x54);                              // 0x001062a4: lw $a0, 0x54($s0)
    v0 = -1;                                                    // 0x001062a8: addiu $v0, $zero, -1
    goto label_0x10634c;                                        // 0x001062ac: b 0x10634c
    *(uint32_t*)(a0) = v1;                                      // 0x001062b0: sw $v1, 0($a0)
    /* nop */                                                   // 0x001062b4: nop 
label_0x1062b8:
    func_001050b8();  // 1050b8                                // 0x001062b8: jal 0x1050b8
    v1 = *(uint16_t*)((s0) + 0xc);                              // 0x001062c0: lhu $v1, 0xc($s0)
    v0 = v1 & 0x1000;                                           // 0x001062c4: andi $v0, $v1, 0x1000
    /* beqzl $v0, 0x1062d8 */                                   // 0x001062c8: beqzl $v0, 0x1062d8
    v0 = *(int32_t*)((s0) + 0x28);                              // 0x001062cc: lw $v0, 0x28($s0)
    goto label_0x1062fc;                                        // 0x001062d0: b 0x1062fc
    a1 = *(int32_t*)((s0) + 0x50);                              // 0x001062d4: lw $a1, 0x50($s0)
    a0 = *(int32_t*)((s0) + 0x1c);                              // 0x001062dc: lw $a0, 0x1c($s0)
    /* call function at address in v0 */                        // 0x001062e0: jalr $v0
    a2 = 1;                                                     // 0x001062e4: addiu $a2, $zero, 1
    v1 = -1;                                                    // 0x001062e8: addiu $v1, $zero, -1
    if (a1 == v1) goto label_0x106350;                          // 0x001062f0: beql $a1, $v1, 0x106350
    v1 = *(uint16_t*)((s0) + 0xc);                              // 0x001062f8: lhu $v1, 0xc($s0)
label_0x1062fc:
    v0 = v1 & 4;                                                // 0x001062fc: andi $v0, $v1, 4
    if (v0 == 0) goto label_0x106328;                           // 0x00106300: beqz $v0, 0x106328
    v0 = v1 & 8;                                                // 0x00106304: andi $v0, $v1, 8
    v0 = *(int32_t*)((s0) + 4);                                 // 0x00106308: lw $v0, 4($s0)
    v1 = *(int32_t*)((s0) + 0x30);                              // 0x0010630c: lw $v1, 0x30($s0)
    if (v1 == 0) goto label_0x106348;                           // 0x00106310: beqz $v1, 0x106348
    v0 = *(int32_t*)((s0) + 0x3c);                              // 0x00106318: lw $v0, 0x3c($s0)
    goto label_0x106348;                                        // 0x0010631c: b 0x106348
    /* nop */                                                   // 0x00106324: nop 
label_0x106328:
    if (v0 == 0) goto label_0x10634c;                           // 0x00106328: beqz $v0, 0x10634c
    v1 = *(int32_t*)(s0);                                       // 0x00106330: lw $v1, 0($s0)
    /* beqzl $v1, 0x106350 */                                   // 0x00106334: beqzl $v1, 0x106350
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x0010633c: lw $v0, 0x10($s0)
    v0 = v1 - v0;                                               // 0x00106340: subu $v0, $v1, $v0
label_0x106348:
label_0x10634c:
label_0x106350:
    return;                                                     // 0x00106354: jr $ra
    sp = sp + 0x10;                                             // 0x00106358: addiu $sp, $sp, 0x10
}