void func_0018d830() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x840;                                           // 0x0018d830: addiu $sp, $sp, -0x840
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0018d83c: addu.qb $zero, $sp, $s1
    a1 = 0x23 << 16;                                            // 0x0018d848: lui $a1, 0x23
    a0 = sp + 0x40;                                             // 0x0018d854: addiu $a0, $sp, 0x40
    func_0010ac68();  // 10ac68                                // 0x0018d858: jal 0x10ac68
    a1 = &str_0022a428;  // "Not supported width...%d @flPS2GetTextureInfoFromContext" // 0x0018d85c: addiu $a1, $a1, -0x5bd8
    func_0010ae00();  // 10ae00                                // 0x0018d860: jal 0x10ae00
    a0 = sp + 0x40;                                             // 0x0018d864: addiu $a0, $sp, 0x40
    v0 = v0 + sp;                                               // 0x0018d868: addu $v0, $v0, $sp
    s0 = v0 + 0x40;                                             // 0x0018d870: addiu $s0, $v0, 0x40
    func_0010a860();  // 10a860                                // 0x0018d874: jal 0x10a860
    a0 = sp + 0x40;                                             // 0x0018d878: addiu $a0, $sp, 0x40
    func_0010ca50();  // 10ca50                                // 0x0018d87c: jal 0x10ca50
    a1 = 0x23 << 16;                                            // 0x0018d884: lui $a1, 0x23
    a0 = sp + 0x40;                                             // 0x0018d888: addiu $a0, $sp, 0x40
    func_0010a860();  // 10a860                                // 0x0018d88c: jal 0x10a860
    a1 = a1 + -0x5bd0;                                          // 0x0018d890: addiu $a1, $a1, -0x5bd0
    func_0012ba38();  // 12ba38                                // 0x0018d894: jal 0x12ba38
    /* nop */                                                   // 0x0018d898: nop 
    a0 = sp + 0x40;                                             // 0x0018d89c: addiu $a0, $sp, 0x40
    func_00118730();  // 118730                                // 0x0018d8a0: jal 0x118730
    a1 = 2;                                                     // 0x0018d8a4: addiu $a1, $zero, 2
    if (v0 >= 0) goto label_0x18d8c0;                           // 0x0018d8a8: bgez $v0, 0x18d8c0
    func_0012ba50();  // 12ba50                                // 0x0018d8b0: jal 0x12ba50
    /* nop */                                                   // 0x0018d8b4: nop 
    goto label_0x18d8f4;                                        // 0x0018d8b8: b 0x18d8f4
label_0x18d8c0:
    func_00118b38();  // 118b38                                // 0x0018d8c8: jal 0x118b38
    a2 = 2;                                                     // 0x0018d8cc: addiu $a2, $zero, 2
    func_00118fd0();  // 118fd0                                // 0x0018d8d8: jal 0x118fd0
    func_001189b8();  // 1189b8                                // 0x0018d8e0: jal 0x1189b8
    func_0012ba50();  // 12ba50                                // 0x0018d8e8: jal 0x12ba50
    /* nop */                                                   // 0x0018d8ec: nop 
    v0 = 1;                                                     // 0x0018d8f0: addiu $v0, $zero, 1
label_0x18d8f4:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0018d8f8: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0018d8fc: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018d900: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018d904: jr $ra
    sp = sp + 0x840;                                            // 0x0018d908: addiu $sp, $sp, 0x840
}