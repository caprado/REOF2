void func_0018d680() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x840;                                           // 0x0018d680: addiu $sp, $sp, -0x840
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0018d68c: addu.qb $zero, $sp, $s1
    a1 = 0x23 << 16;                                            // 0x0018d698: lui $a1, 0x23
    a0 = sp + 0x40;                                             // 0x0018d6a4: addiu $a0, $sp, 0x40
    func_0010ae00();  // 0x10ac68                                // 0x0018d6a8: jal 0x10ac68
    a1 = &str_0022a428;  // "Not supported width...%d @flPS2GetTextureInfoFromContext" // 0x0018d6ac: addiu $a1, $a1, -0x5bd8
    func_0010af38();  // 0x10ae00                                // 0x0018d6b0: jal 0x10ae00
    a0 = sp + 0x40;                                             // 0x0018d6b4: addiu $a0, $sp, 0x40
    v0 = v0 + sp;                                               // 0x0018d6b8: addu $v0, $v0, $sp
    s0 = v0 + 0x40;                                             // 0x0018d6c0: addiu $s0, $v0, 0x40
    func_0010a990();  // 0x10a860                                // 0x0018d6c4: jal 0x10a860
    a0 = sp + 0x40;                                             // 0x0018d6c8: addiu $a0, $sp, 0x40
    func_0010caa0();  // 0x10ca50                                // 0x0018d6cc: jal 0x10ca50
    a1 = 0x23 << 16;                                            // 0x0018d6d4: lui $a1, 0x23
    a0 = sp + 0x40;                                             // 0x0018d6d8: addiu $a0, $sp, 0x40
    func_0010a990();  // 0x10a860                                // 0x0018d6dc: jal 0x10a860
    a1 = a1 + -0x5bd0;                                          // 0x0018d6e0: addiu $a1, $a1, -0x5bd0
    func_0018d5d0();  // 0x18d5c0                                // 0x0018d6e4: jal 0x18d5c0
    a0 = sp + 0x40;                                             // 0x0018d6e8: addiu $a0, $sp, 0x40
    func_001ab1d0();  // 0x1ab180                                // 0x0018d6ec: jal 0x1ab180
    /* nop */                                                   // 0x0018d6f0: nop 
    a0 = sp + 0x40;                                             // 0x0018d6f4: addiu $a0, $sp, 0x40
    func_001189b8();  // 0x118730                                // 0x0018d6f8: jal 0x118730
    a1 = 1;                                                     // 0x0018d6fc: addiu $a1, $zero, 1
    if (s0 >= 0) goto label_0x18d71c;                           // 0x0018d704: bgez $s0, 0x18d71c
    func_001ab230();  // 0x1ab1d0                                // 0x0018d70c: jal 0x1ab1d0
    /* nop */                                                   // 0x0018d710: nop 
    goto label_0x18d73c;                                        // 0x0018d714: b 0x18d73c
label_0x18d71c:
    func_00118fd0();  // 0x118d70                                // 0x0018d720: jal 0x118d70
    func_00118b38();  // 0x1189b8                                // 0x0018d728: jal 0x1189b8
    func_001ab230();  // 0x1ab1d0                                // 0x0018d730: jal 0x1ab1d0
    /* nop */                                                   // 0x0018d734: nop 
    v0 = 1;                                                     // 0x0018d738: addiu $v0, $zero, 1
label_0x18d73c:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0018d740: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0018d744: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018d748: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018d74c: jr $ra
    sp = sp + 0x840;                                            // 0x0018d750: addiu $sp, $sp, 0x840
}