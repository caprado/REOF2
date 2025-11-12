void func_00108598() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00108598: addiu $sp, $sp, -0x40
    s1 = s0 >> 5;                                               // 0x001085a8: sra $s1, $s0, 5
    v1 = *(int32_t*)((s3) + 0x10);                              // 0x001085c8: lw $v1, 0x10($s3)
    a2 = *(int32_t*)((s3) + 8);                                 // 0x001085cc: lw $a2, 8($s3)
    v1 = s1 + v1;                                               // 0x001085d0: addu $v1, $s1, $v1
    s2 = v1 + 1;                                                // 0x001085d4: addiu $s2, $v1, 1
    v0 = (a2 < s2) ? 1 : 0;                                     // 0x001085d8: slt $v0, $a2, $s2
    if (v0 == 0) goto label_0x108604;                           // 0x001085dc: beqz $v0, 0x108604
    a1 = *(int32_t*)((s3) + 4);                                 // 0x001085e0: lw $a1, 4($s3)
    /* nop */                                                   // 0x001085e4: nop 
label_0x1085e8:
    a2 = a2 << 1;                                               // 0x001085e8: sll $a2, $a2, 1
    v0 = (a2 < s2) ? 1 : 0;                                     // 0x001085ec: slt $v0, $a2, $s2
    /* nop */                                                   // 0x001085f0: nop 
    /* nop */                                                   // 0x001085f4: nop 
    /* nop */                                                   // 0x001085f8: nop 
    if (v0 != 0) goto label_0x1085e8;                           // 0x001085fc: bnez $v0, 0x1085e8
    a1 = a1 + 1;                                                // 0x00108600: addiu $a1, $a1, 1
label_0x108604:
    func_00107ea8();  // 0x107e00                                // 0x00108604: jal 0x107e00
    if (s1 <= 0) goto label_0x10863c;                           // 0x00108610: blez $s1, 0x10863c
    a3 = s4 + 0x14;                                             // 0x00108614: addiu $a3, $s4, 0x14
    /* nop */                                                   // 0x0010861c: nop 
label_0x108620:
    a2 = a2 + -1;                                               // 0x00108620: addiu $a2, $a2, -1
    *(uint32_t*)(a3) = 0;                                       // 0x00108624: sw $zero, 0($a3)
    /* nop */                                                   // 0x00108628: nop 
    /* nop */                                                   // 0x0010862c: nop 
    /* nop */                                                   // 0x00108630: nop 
    if (a2 != 0) goto label_0x108620;                           // 0x00108634: bnez $a2, 0x108620
    a3 = a3 + 4;                                                // 0x00108638: addiu $a3, $a3, 4
label_0x10863c:
    v0 = *(int32_t*)((s3) + 0x10);                              // 0x0010863c: lw $v0, 0x10($s3)
    a0 = s3 + 0x14;                                             // 0x00108640: addiu $a0, $s3, 0x14
    s0 = s0 & 0x1f;                                             // 0x00108644: andi $s0, $s0, 0x1f
    v0 = v0 << 2;                                               // 0x00108648: sll $v0, $v0, 2
    if (s0 == 0) goto label_0x108698;                           // 0x0010864c: beqz $s0, 0x108698
    a2 = a0 + v0;                                               // 0x00108650: addu $a2, $a0, $v0
    v0 = 0x20;                                                  // 0x00108654: addiu $v0, $zero, 0x20
    a1 = v0 - s0;                                               // 0x0010865c: subu $a1, $v0, $s0
label_0x108660:
    v0 = *(int32_t*)(a0);                                       // 0x00108660: lw $v0, 0($a0)
    v0 = v0 << s0;                                              // 0x00108664: sllv $v0, $v0, $s0
    v0 = v0 | v1;                                               // 0x00108668: or $v0, $v0, $v1
    *(uint32_t*)(a3) = v0;                                      // 0x0010866c: sw $v0, 0($a3)
    a3 = a3 + 4;                                                // 0x00108670: addiu $a3, $a3, 4
    v1 = *(int32_t*)(a0);                                       // 0x00108674: lw $v1, 0($a0)
    a0 = a0 + 4;                                                // 0x00108678: addiu $a0, $a0, 4
    v0 = ((unsigned)a0 < (unsigned)a2) ? 1 : 0;                 // 0x0010867c: sltu $v0, $a0, $a2
    if (v0 != 0) goto label_0x108660;                           // 0x00108680: bnez $v0, 0x108660
    v1 = (unsigned)v1 >> a1;                                    // 0x00108684: srlv $v1, $v1, $a1
    if (v1 == 0) goto label_0x1086b4;                           // 0x00108688: beqz $v1, 0x1086b4
    *(uint32_t*)(a3) = v1;                                      // 0x0010868c: sw $v1, 0($a3)
    goto label_0x1086b4;                                        // 0x00108690: b 0x1086b4
    s2 = s2 + 1;                                                // 0x00108694: addiu $s2, $s2, 1
label_0x108698:
    v0 = *(int32_t*)(a0);                                       // 0x00108698: lw $v0, 0($a0)
    a0 = a0 + 4;                                                // 0x0010869c: addiu $a0, $a0, 4
    v1 = ((unsigned)a0 < (unsigned)a2) ? 1 : 0;                 // 0x001086a0: sltu $v1, $a0, $a2
    *(uint32_t*)(a3) = v0;                                      // 0x001086a4: sw $v0, 0($a3)
    /* nop */                                                   // 0x001086a8: nop 
    if (v1 != 0) goto label_0x108698;                           // 0x001086ac: bnez $v1, 0x108698
    a3 = a3 + 4;                                                // 0x001086b0: addiu $a3, $a3, 4
label_0x1086b4:
    v0 = s2 + -1;                                               // 0x001086b4: addiu $v0, $s2, -1
    *(uint32_t*)((s4) + 0x10) = v0;                             // 0x001086bc: sw $v0, 0x10($s4)
    func_00107ed8();  // 0x107ea8                                // 0x001086c0: jal 0x107ea8
    return;                                                     // 0x001086e8: jr $ra
    sp = sp + 0x40;                                             // 0x001086ec: addiu $sp, $sp, 0x40
}