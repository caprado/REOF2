void func_0018d910() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x830;                                           // 0x0018d910: addiu $sp, $sp, -0x830
    a1 = 0x23 << 16;                                            // 0x0018d914: lui $a1, 0x23
    a1 = &str_0022a428;  // "Not supported width...%d @flPS2GetTextureInfoFromContext" // 0x0018d91c: addiu $a1, $a1, -0x5bd8
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0018d920: addu.qb $zero, $sp, $s1
    func_0010ae00();  // 0x10ac68                                // 0x0018d92c: jal 0x10ac68
    a0 = sp + 0x30;                                             // 0x0018d930: addiu $a0, $sp, 0x30
    func_0010af38();  // 0x10ae00                                // 0x0018d934: jal 0x10ae00
    a0 = sp + 0x30;                                             // 0x0018d938: addiu $a0, $sp, 0x30
    v0 = v0 + sp;                                               // 0x0018d93c: addu $v0, $v0, $sp
    s0 = v0 + 0x30;                                             // 0x0018d944: addiu $s0, $v0, 0x30
    func_0010a990();  // 0x10a860                                // 0x0018d948: jal 0x10a860
    a0 = sp + 0x30;                                             // 0x0018d94c: addiu $a0, $sp, 0x30
    func_0010caa0();  // 0x10ca50                                // 0x0018d950: jal 0x10ca50
    a1 = 0x23 << 16;                                            // 0x0018d958: lui $a1, 0x23
    a0 = sp + 0x30;                                             // 0x0018d95c: addiu $a0, $sp, 0x30
    func_0010a990();  // 0x10a860                                // 0x0018d960: jal 0x10a860
    a1 = a1 + -0x5bd0;                                          // 0x0018d964: addiu $a1, $a1, -0x5bd0
    func_0018d5d0();  // 0x18d5c0                                // 0x0018d968: jal 0x18d5c0
    a0 = sp + 0x30;                                             // 0x0018d96c: addiu $a0, $sp, 0x30
    func_0012ba50();  // 0x12ba38                                // 0x0018d970: jal 0x12ba38
    /* nop */                                                   // 0x0018d974: nop 
    a0 = sp + 0x30;                                             // 0x0018d978: addiu $a0, $sp, 0x30
    func_001189b8();  // 0x118730                                // 0x0018d97c: jal 0x118730
    a1 = 1;                                                     // 0x0018d980: addiu $a1, $zero, 1
    if (v0 >= 0) goto label_0x18d99c;                           // 0x0018d984: bgez $v0, 0x18d99c
    func_0012ba78();  // 0x12ba50                                // 0x0018d98c: jal 0x12ba50
    /* nop */                                                   // 0x0018d990: nop 
    goto label_0x18d9c4;                                        // 0x0018d994: b 0x18d9c4
label_0x18d99c:
    func_00118d70();  // 0x118b38                                // 0x0018d9a4: jal 0x118b38
    a2 = 2;                                                     // 0x0018d9a8: addiu $a2, $zero, 2
    func_00118b38();  // 0x1189b8                                // 0x0018d9b0: jal 0x1189b8
    func_0012ba78();  // 0x12ba50                                // 0x0018d9b8: jal 0x12ba50
    /* nop */                                                   // 0x0018d9bc: nop 
label_0x18d9c4:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0018d9c8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018d9cc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018d9d0: jr $ra
    sp = sp + 0x830;                                            // 0x0018d9d4: addiu $sp, $sp, 0x830
}