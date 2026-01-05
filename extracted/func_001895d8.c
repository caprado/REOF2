void func_001895d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x50;                                            // 0x001895d8: addiu $sp, $sp, -0x50
    v0 = 0x28 << 16;                                            // 0x001895dc: lui $v0, 0x28
    t0 = 0x280;                                                 // 0x001895e4: addiu $t0, $zero, 0x280
    s0 = v0 + 0x12c0;                                           // 0x001895e8: addiu $s0, $v0, 0x12c0
    g_002812c0 = a0;  // Global at 0x002812c0                   // 0x001895ec: sw $a0, 0x12c0($v0)
    a0 = 0x28 << 16;                                            // 0x001895f4: lui $a0, 0x28
    g_002812c4 = a1;  // Global at 0x002812c4                   // 0x00189608: sw $a1, 4($s0)
    a0 = a0 + 0x1248;                                           // 0x0018960c: addiu $a0, $a0, 0x1248
    a1 = 0x8000 << 16;                                          // 0x00189610: lui $a1, 0x8000
    v0 = *(int32_t*)(s1);                                       // 0x00189618: lw $v0, 0($s1)
    a1 = a1 | 0x131a;                                           // 0x0018961c: ori $a1, $a1, 0x131a
    local_0 = 0;                                                // 0x00189620: sw $zero, 0($sp)
    g_002812c8 = v0;  // Global at 0x002812c8                   // 0x00189628: sw $v0, 8($s0)
    t2 = 0x280;                                                 // 0x00189630: addiu $t2, $zero, 0x280
    func_001176a8();  // 1176a8                                // 0x00189634: jal 0x1176a8
    if (v0 >= 0) goto label_0x189658;                           // 0x0018963c: bgezl $v0, 0x189658
    v0 = g_002814cc;  // Global at 0x002814cc                   // 0x00189640: lw $v0, 0x20c($s0)
    a0 = 0x23 << 16;                                            // 0x00189644: lui $a0, 0x23
    func_001896c8();  // 1896c8                                // 0x00189648: jal 0x1896c8
    a0 = &str_0022a2a8;  // "A = %x B = %x, %x @flPS2ConvClayData" // 0x0018964c: addiu $a0, $a0, -0x5d58
    goto label_0x1896ac;                                        // 0x00189650: b 0x1896ac
label_0x189658:
    if (v0 < 0) goto label_0x1896b0;                            // 0x00189658: bltz $v0, 0x1896b0
    v1 = g_002812c8;  // Global at 0x002812c8                   // 0x00189660: lw $v1, 8($s0)
    *(uint32_t*)(s1) = v1;                                      // 0x00189664: sw $v1, 0($s1)
    v0 = g_002812c8;  // Global at 0x002812c8                   // 0x00189668: lw $v0, 8($s0)
    if (v0 <= 0) goto label_0x1896a8;                           // 0x0018966c: blez $v0, 0x1896a8
    a2 = s0 + 0xc;                                              // 0x00189674: addiu $a2, $s0, 0xc
    v0 = a2 + a1;                                               // 0x00189678: addu $v0, $a2, $a1
    /* nop */                                                   // 0x0018967c: nop 
label_0x189680:
    a0 = s2 + a1;                                               // 0x00189680: addu $a0, $s2, $a1
    v1 = g_00280000;  // Global at 0x00280000                   // 0x00189684: lbu $v1, 0($v0)
    a1 = a1 + 1;                                                // 0x00189688: addiu $a1, $a1, 1
    str_0022a2a8 = v1;  // Global at 0x0022a2a8                 // 0x0018968c: sb $v1, 0($a0)
    v0 = g_002812c8;  // Global at 0x002812c8                   // 0x00189690: lw $v0, 8($s0)
    v0 = (a1 < v0) ? 1 : 0;                                     // 0x00189694: slt $v0, $a1, $v0
    if (v0 != 0) goto label_0x189680;                           // 0x00189698: bnez $v0, 0x189680
    v0 = a2 + a1;                                               // 0x0018969c: addu $v0, $a2, $a1
    goto label_0x1896ac;                                        // 0x001896a0: b 0x1896ac
    v0 = g_002814cc;  // Global at 0x002814cc                   // 0x001896a4: lw $v0, 0x20c($s0)
label_0x1896a8:
    v0 = g_002814cc;  // Global at 0x002814cc                   // 0x001896a8: lw $v0, 0x20c($s0)
label_0x1896ac:
label_0x1896b0:
    return;                                                     // 0x001896bc: jr $ra
    sp = sp + 0x50;                                             // 0x001896c0: addiu $sp, $sp, 0x50
}