void func_00129988() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00129988: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x1299b8;                           // 0x00129994: bnez $a0, 0x1299b8
    a0 = 0x22 << 16;                                            // 0x0012999c: lui $a0, 0x22
    func_00127de8();  // 0x127d90                                // 0x001299a0: jal 0x127d90
    a0 = &str_00222a30;  // "E9040831:'adxf' is NULL.(ADXF_GetNumReadSct)" // 0x001299a4: addiu $a0, $a0, 0x2a30
    *(uint32_t*)(s0) = 0;                                       // 0x001299a8: sw $zero, 0($s0)
    goto label_0x1299c4;                                        // 0x001299ac: b 0x1299c4
    v0 = -3;                                                    // 0x001299b0: addiu $v0, $zero, -3
    /* nop */                                                   // 0x001299b4: nop 
label_0x1299b8:
    v0 = g_00222a48;  // Global at 0x00222a48                   // 0x001299b8: lw $v0, 0x18($a0)
    *(uint32_t*)(s0) = v0;                                      // 0x001299bc: sw $v0, 0($s0)
    v0 = g_00222a4c;  // Global at 0x00222a4c                   // 0x001299c0: lw $v0, 0x1c($a0)
label_0x1299c4:
    return;                                                     // 0x001299cc: jr $ra
    sp = sp + 0x10;                                             // 0x001299d0: addiu $sp, $sp, 0x10
}