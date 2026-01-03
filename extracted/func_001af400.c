void func_001af400() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001af400: addiu $sp, $sp, -0x20
    func_001afb40();  // 1afb40                                // 0x001af40c: jal 0x1afb40
    v1 = 3;                                                     // 0x001af414: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x1af45c;                          // 0x001af418: beq $v0, $v1, 0x1af45c
    v1 = 2;                                                     // 0x001af41c: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x1af45c;                          // 0x001af420: beq $v0, $v1, 0x1af45c
    /* nop */                                                   // 0x001af424: nop 
    v1 = 1;                                                     // 0x001af428: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1af454;                          // 0x001af42c: beq $v0, $v1, 0x1af454
    if (v0 == 0) goto label_0x1af444;                           // 0x001af434: beqz $v0, 0x1af444
    goto label_0x1af460;                                        // 0x001af43c: b 0x1af460
label_0x1af444:
    func_007d21d0();  // 0x7d21d0                               // 0x001af444: jal 0x7d21d0
    /* nop */                                                   // 0x001af448: nop 
    goto label_0x1af45c;                                        // 0x001af44c: b 0x1af45c
    /* nop */                                                   // 0x001af450: nop 
label_0x1af454:
    func_007d3ba0();  // 0x7d3ba0                               // 0x001af454: jal 0x7d3ba0
    /* nop */                                                   // 0x001af458: nop 
label_0x1af45c:
label_0x1af460:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001af460: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001af464: jr $ra
    sp = sp + 0x20;                                             // 0x001af468: addiu $sp, $sp, 0x20
}