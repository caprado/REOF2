void func_001bf730() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001bf730: addiu $sp, $sp, -0x20
    v0 = 1;                                                     // 0x001bf734: addiu $v0, $zero, 1
    v1 = *(int32_t*)((a0) + 4);                                 // 0x001bf740: lw $v1, 4($a0)
    if (v1 == v0) goto label_0x1bf7a4;                          // 0x001bf744: beq $v1, $v0, 0x1bf7a4
    if (v1 == 0) goto label_0x1bf75c;                           // 0x001bf74c: beqz $v1, 0x1bf75c
    /* nop */                                                   // 0x001bf750: nop 
    goto label_0x1bf7c8;                                        // 0x001bf754: b 0x1bf7c8
    v0 = -1;                                                    // 0x001bf758: addiu $v0, $zero, -1
label_0x1bf75c:
    func_001bf010();  // 0x1befe0                                // 0x001bf75c: jal 0x1befe0
    /* nop */                                                   // 0x001bf760: nop 
    if (v0 < 0) goto label_0x1bf7c4;                            // 0x001bf764: bltz $v0, 0x1bf7c4
    /* nop */                                                   // 0x001bf768: nop 
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x001bf76c: lw $v1, 0x14($s0)
    v0 = gp + -0x6300;                                          // 0x001bf770: addiu $v0, $gp, -0x6300
    v1 = v1 << 2;                                               // 0x001bf774: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001bf778: addu $v0, $v0, $v1
    func_00180da8();  // 0x180cf8                                // 0x001bf77c: jal 0x180cf8
    a0 = *(int32_t*)(v0);                                       // 0x001bf780: lw $a0, 0($v0)
    if (v0 >= 0) goto label_0x1bf794;                           // 0x001bf784: bgez $v0, 0x1bf794
    /* nop */                                                   // 0x001bf788: nop 
    goto label_0x1bf7c8;                                        // 0x001bf78c: b 0x1bf7c8
    v0 = 1;                                                     // 0x001bf790: addiu $v0, $zero, 1
label_0x1bf794:
    v0 = *(int32_t*)((s0) + 4);                                 // 0x001bf794: lw $v0, 4($s0)
    v0 = v0 + 1;                                                // 0x001bf798: addiu $v0, $v0, 1
    goto label_0x1bf7c4;                                        // 0x001bf79c: b 0x1bf7c4
    *(uint32_t*)((s0) + 4) = v0;                                // 0x001bf7a0: sw $v0, 4($s0)
label_0x1bf7a4:
    func_001bf010();  // 0x1befe0                                // 0x001bf7a4: jal 0x1befe0
    /* nop */                                                   // 0x001bf7a8: nop 
    if (v0 < 0) goto label_0x1bf7c4;                            // 0x001bf7ac: bltz $v0, 0x1bf7c4
    /* nop */                                                   // 0x001bf7b0: nop 
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x001bf7b4: sw $zero, 4($s0)
    v0 = *(int32_t*)((s0) + 0x1c);                              // 0x001bf7b8: lw $v0, 0x1c($s0)
    goto label_0x1bf7c8;                                        // 0x001bf7bc: b 0x1bf7c8
    v0 = (v0 < 0) ? 1 : 0;                                      // 0x001bf7c0: slt $v0, $v0, $zero
label_0x1bf7c4:
    v0 = -1;                                                    // 0x001bf7c4: addiu $v0, $zero, -1
label_0x1bf7c8:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bf7cc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bf7d0: jr $ra
    sp = sp + 0x20;                                             // 0x001bf7d4: addiu $sp, $sp, 0x20
}