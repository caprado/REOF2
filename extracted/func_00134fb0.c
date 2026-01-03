void func_00134fb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00134fb0: addiu $sp, $sp, -0x40
    v1 = 0x20 << 16;                                            // 0x00134fb4: lui $v1, 0x20
    v1 = v1 + 0x2184;                                           // 0x00134fbc: addiu $v1, $v1, 0x2184
    v0 = g_00202184;  // Global at 0x00202184                   // 0x00134fd8: lw $v0, 0($v1)
    v0 = v0 + -1;                                               // 0x00134fdc: addiu $v0, $v0, -1
    if (v0 != 0) goto label_0x135090;                           // 0x00134fe0: bnez $v0, 0x135090
    g_00202184 = v0;  // Global at 0x00202184                   // 0x00134fe4: sw $v0, 0($v1)
    v0 = 0x25 << 16;                                            // 0x00134fe8: lui $v0, 0x25
    s4 = v0 + 0x36a8;                                           // 0x00134ff0: addiu $s4, $v0, 0x36a8
    s5 = s4 + 4;                                                // 0x00134ff4: addiu $s5, $s4, 4
    /* nop */                                                   // 0x00134ffc: nop 
label_0x135000:
    v0 = *(int32_t*)(s2);                                       // 0x00135000: lw $v0, 0($s2)
    s3 = s1 << 3;                                               // 0x00135004: sll $s3, $s1, 3
    if (v0 == 0) goto label_0x135028;                           // 0x00135008: beqz $v0, 0x135028
    s1 = s1 + 1;                                                // 0x0013500c: addiu $s1, $s1, 1
    v0 = g_00250014;  // Global at 0x00250014                   // 0x00135010: lw $v0, 0x14($v0)
    /* call function at address in v0 */                        // 0x00135018: jalr $v0
    a0 = *(int32_t*)((s2) + 4);                                 // 0x0013501c: lw $a0, 4($s2)
    goto label_0x135030;                                        // 0x00135020: b 0x135030
    v0 = s3 + s0;                                               // 0x00135024: addu $v0, $s3, $s0
label_0x135028:
    s0 = s4 + 4;                                                // 0x00135028: addiu $s0, $s4, 4
    v0 = s3 + s0;                                               // 0x0013502c: addu $v0, $s3, $s0
label_0x135030:
    v1 = (s1 < 0x28) ? 1 : 0;                                   // 0x00135030: slti $v1, $s1, 0x28
    *(uint32_t*)(s2) = 0;                                       // 0x00135034: sw $zero, 0($s2)
    s2 = s2 + 8;                                                // 0x00135038: addiu $s2, $s2, 8
    if (v1 != 0) goto label_0x135000;                           // 0x0013503c: bnez $v1, 0x135000
    g_00250000 = 0;  // Global at 0x00250000                    // 0x00135040: sw $zero, 0($v0)
    v0 = 0x25 << 16;                                            // 0x00135044: lui $v0, 0x25
    s1 = 0x1f;                                                  // 0x00135048: addiu $s1, $zero, 0x1f
    v0 = v0 + 0x37e8;                                           // 0x0013504c: addiu $v0, $v0, 0x37e8
    v0 = v0 + 0x1f4;                                            // 0x00135050: addiu $v0, $v0, 0x1f4
    /* nop */                                                   // 0x00135054: nop 
label_0x135058:
    s1 = s1 + -1;                                               // 0x00135058: addiu $s1, $s1, -1
    g_002539dc = 0;  // Global at 0x002539dc                    // 0x0013505c: sb $zero, 0($v0)
    /* nop */                                                   // 0x00135060: nop 
    /* nop */                                                   // 0x00135064: nop 
    /* nop */                                                   // 0x00135068: nop 
    if (s1 >= 0) goto label_0x135058;                           // 0x0013506c: bgez $s1, 0x135058
    v0 = v0 + -0x10;                                            // 0x00135070: addiu $v0, $v0, -0x10
    s0 = 0x25 << 16;                                            // 0x00135074: lui $s0, 0x25
    s0 = s0 + 0x39e8;                                           // 0x0013507c: addiu $s0, $s0, 0x39e8
    a2 = 9;                                                     // 0x00135080: addiu $a2, $zero, 9
    func_00107c70();  // 107c70                                // 0x00135084: jal 0x107c70
    g_002539e8 = 0;  // Global at 0x002539e8                    // 0x0013508c: sb $zero, 0($s0)
label_0x135090:
    return;                                                     // 0x001350ac: jr $ra
    sp = sp + 0x40;                                             // 0x001350b0: addiu $sp, $sp, 0x40
}