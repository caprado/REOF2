void func_001a87c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x830;                                           // 0x001a87c0: addiu $sp, $sp, -0x830
    a1 = 0x23 << 16;                                            // 0x001a87c4: lui $a1, 0x23
    a1 = &str_0022a788;  // "BIN\\%d.DAT"                       // 0x001a87cc: addiu $a1, $a1, -0x5878
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a87d0: addu.qb $zero, $sp, $s1
    func_0010ae00();  // 0x10ac68                                // 0x001a87dc: jal 0x10ac68
    a0 = sp + 0x30;                                             // 0x001a87e0: addiu $a0, $sp, 0x30
    func_0010af38();  // 0x10ae00                                // 0x001a87e4: jal 0x10ae00
    a0 = sp + 0x30;                                             // 0x001a87e8: addiu $a0, $sp, 0x30
    v0 = v0 + sp;                                               // 0x001a87ec: addu $v0, $v0, $sp
    s0 = v0 + 0x30;                                             // 0x001a87f4: addiu $s0, $v0, 0x30
    func_0010a990();  // 0x10a860                                // 0x001a87f8: jal 0x10a860
    a0 = sp + 0x30;                                             // 0x001a87fc: addiu $a0, $sp, 0x30
    func_0010caa0();  // 0x10ca50                                // 0x001a8800: jal 0x10ca50
    a1 = 0x23 << 16;                                            // 0x001a8808: lui $a1, 0x23
    a0 = sp + 0x30;                                             // 0x001a880c: addiu $a0, $sp, 0x30
    func_0010a990();  // 0x10a860                                // 0x001a8810: jal 0x10a860
    a1 = a1 + -0x5870;                                          // 0x001a8814: addiu $a1, $a1, -0x5870
    v0 = *(int32_t*)((gp) + -0x63f4);                           // 0x001a8818: lw $v0, -0x63f4($gp)
    if (v0 == 0) goto label_0x1a8830;                           // 0x001a881c: beqz $v0, 0x1a8830
    a0 = sp + 0x30;                                             // 0x001a8820: addiu $a0, $sp, 0x30
    func_0012ba50();  // 0x12ba38                                // 0x001a8824: jal 0x12ba38
    /* nop */                                                   // 0x001a8828: nop 
    a0 = sp + 0x30;                                             // 0x001a882c: addiu $a0, $sp, 0x30
label_0x1a8830:
    func_001189b8();  // 0x118730                                // 0x001a8830: jal 0x118730
    a1 = 1;                                                     // 0x001a8834: addiu $a1, $zero, 1
    if (v0 >= 0) goto label_0x1a8860;                           // 0x001a8838: bgez $v0, 0x1a8860
    v0 = *(int32_t*)((gp) + -0x63f4);                           // 0x001a8840: lw $v0, -0x63f4($gp)
    if (v0 == 0) goto label_0x1a8858;                           // 0x001a8844: beqz $v0, 0x1a8858
    func_0012ba78();  // 0x12ba50                                // 0x001a884c: jal 0x12ba50
    /* nop */                                                   // 0x001a8850: nop 
label_0x1a8858:
    goto label_0x1a8898;                                        // 0x001a8858: b 0x1a8898
label_0x1a8860:
    func_00118d70();  // 0x118b38                                // 0x001a8868: jal 0x118b38
    a2 = 2;                                                     // 0x001a886c: addiu $a2, $zero, 2
    func_00118b38();  // 0x1189b8                                // 0x001a8874: jal 0x1189b8
    v0 = *(int32_t*)((gp) + -0x63f4);                           // 0x001a887c: lw $v0, -0x63f4($gp)
    if (v0 == 0) goto label_0x1a8894;                           // 0x001a8880: beqz $v0, 0x1a8894
    func_0012ba78();  // 0x12ba50                                // 0x001a8888: jal 0x12ba50
    /* nop */                                                   // 0x001a888c: nop 
label_0x1a8894:
label_0x1a8898:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a8898: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a889c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a88a0: jr $ra
    sp = sp + 0x830;                                            // 0x001a88a4: addiu $sp, $sp, 0x830
}