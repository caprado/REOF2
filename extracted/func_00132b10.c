void func_00132b10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00132b10: addiu $sp, $sp, -0x30
    if (s2 != 0) goto label_0x132b48;                           // 0x00132b28: bnez $s2, 0x132b48
    a0 = 0x22 << 16;                                            // 0x00132b30: lui $a0, 0x22
    func_00127de8();  // 0x127d90                                // 0x00132b34: jal 0x127d90
    a0 = &str_00223d40;  // "E02080847 ADXT_GetStatPause: parameter error" // 0x00132b38: addiu $a0, $a0, 0x3d40
    goto label_0x132c28;                                        // 0x00132b3c: b 0x132c28
    /* nop */                                                   // 0x00132b44: nop 
label_0x132b48:
    v0 = *(int8_t*)((s2) + 0x72);                               // 0x00132b48: lb $v0, 0x72($s2)
    if (s0 == v0) goto label_0x132c24;                          // 0x00132b4c: beq $s0, $v0, 0x132c24
    s1 = *(int8_t*)((s2) + 1);                                  // 0x00132b50: lb $s1, 1($s2)
    func_001261b8();  // 0x1261a0                                // 0x00132b54: jal 0x1261a0
    /* nop */                                                   // 0x00132b58: nop 
    v0 = s1 + -3;                                               // 0x00132b5c: addiu $v0, $s1, -3
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x00132b60: sltiu $v0, $v0, 2
    if (v0 == 0) goto label_0x132c1c;                           // 0x00132b64: beqz $v0, 0x132c1c
    *(uint8_t*)((s2) + 0x72) = s0;                              // 0x00132b68: sb $s0, 0x72($s2)
    v0 = 1;                                                     // 0x00132b6c: addiu $v0, $zero, 1
    if (s0 != v0) goto label_0x132b88;                          // 0x00132b70: bne $s0, $v0, 0x132b88
    a0 = *(int32_t*)((s2) + 0xc);                               // 0x00132b74: lw $a0, 0xc($s2)
    func_0012c3d8();  // 0x12c3c0                                // 0x00132b78: jal 0x12c3c0
    goto label_0x132ba0;                                        // 0x00132b80: b 0x132ba0
    s0 = 0x20 << 16;                                            // 0x00132b84: lui $s0, 0x20
label_0x132b88:
    func_0012c3d8();  // 0x12c3c0                                // 0x00132b88: jal 0x12c3c0
    a1 = 1;                                                     // 0x00132b8c: addiu $a1, $zero, 1
    v0 = 0x1f << 16;                                            // 0x00132b90: lui $v0, 0x1f
    v1 = g_001f59c4;  // Global at 0x001f59c4                   // 0x00132b94: lw $v1, 0x59c4($v0)
    *(uint32_t*)((s2) + 0xa0) = v1;                             // 0x00132b98: sw $v1, 0xa0($s2)
    s0 = 0x20 << 16;                                            // 0x00132b9c: lui $s0, 0x20
label_0x132ba0:
    s0 = s0 + 0x1d50;                                           // 0x00132ba4: addiu $s0, $s0, 0x1d50
    s1 = g_00201d50;  // Global at 0x00201d50                   // 0x00132bac: lw $s1, 0($s0)
    a2 = sp + 4;                                                // 0x00132bb0: addiu $a2, $sp, 4
    func_00132118();  // 0x131e20                                // 0x00132bb4: jal 0x131e20
    g_00201d50 = 0;  // Global at 0x00201d50                    // 0x00132bb8: sw $zero, 0($s0)
    v0 = 0x20 << 16;                                            // 0x00132bbc: lui $v0, 0x20
    FPU_F0 = *(float*)(sp);  // Load float                      // 0x00132bc0: lwc1 $f0, 0($sp)
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x00132bc4: cvt.s.w $f0, $f0
    at = 0x4f00 << 16;                                          // 0x00132bc8: lui $at, 0x4f00
    /* move to FPU: $at, $f3 */                                 // 0x00132bcc: mtc1 $at, $f3
    FPU_F2 = *(float*)((sp) + 4);  // Load float                // 0x00132bd0: lwc1 $f2, 4($sp)
    /* FPU: cvt.s.w $f2, $f2 */                                 // 0x00132bd4: cvt.s.w $f2, $f2
    FPU_F1 = *(float*)((v0) + 0x1d88);  // Load float           // 0x00132bd8: lwc1 $f1, 0x1d88($v0)
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x00132bdc: cvt.s.w $f1, $f1
    /* nop */                                                   // 0x00132be0: nop 
    /* nop */                                                   // 0x00132be4: nop 
    /* FPU: div.s $f0, $f0, $f2 */                              // 0x00132be8: div.s $f0, $f0, $f2
    /* FPU: mul.s $f0, $f0, $f1 */                              // 0x00132bec: mul.s $f0, $f0, $f1
    /* FPU: c.ole.s $f3, $f0 */                                 // 0x00132bf0: c.ole.s $f3, $f0
    /* FPU: cvt.w.s $f1, $f0 */                                 // 0x00132bf4: cvt.w.s $f1, $f0
    /* move from FPU: $v1, $f1 */                               // 0x00132bf8: mfc1 $v1, $f1
    /* bc1f 0x132c18 */                                         // 0x00132bfc: bc1f 0x132c18
    g_00201d50 = s1;  // Global at 0x00201d50                   // 0x00132c00: sw $s1, 0($s0)
    /* FPU: sub.s $f0, $f0, $f3 */                              // 0x00132c04: sub.s $f0, $f0, $f3
    v0 = 0x8000 << 16;                                          // 0x00132c08: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f0 */                                 // 0x00132c0c: cvt.w.s $f1, $f0
    /* move from FPU: $v1, $f1 */                               // 0x00132c10: mfc1 $v1, $f1
    v1 = v1 | v0;                                               // 0x00132c14: or $v1, $v1, $v0
    *(uint32_t*)((s2) + 0x9c) = v1;                             // 0x00132c18: sw $v1, 0x9c($s2)
label_0x132c1c:
    func_001261d0();  // 0x1261b8                                // 0x00132c1c: jal 0x1261b8
    /* nop */                                                   // 0x00132c20: nop 
label_0x132c24:
label_0x132c28:
    return;                                                     // 0x00132c34: jr $ra
    sp = sp + 0x30;                                             // 0x00132c38: addiu $sp, $sp, 0x30
}