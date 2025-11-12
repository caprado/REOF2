void func_0019ed40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)((gp) + -0x647c);                           // 0x0019ed40: lw $v0, -0x647c($gp)
    if (v0 != 0) goto label_0x19ed54;                           // 0x0019ed44: bnez $v0, 0x19ed54
    at = 0x29 << 16;                                            // 0x0019ed48: lui $at, 0x29
    goto label_0x19ee00;                                        // 0x0019ed4c: b 0x19ee00
label_0x19ed54:
    v1 = *(int16_t*)((v0) + 0x14);                              // 0x0019ed54: lh $v1, 0x14($v0)
    a2 = g_0028ffb8;  // Global at 0x0028ffb8                   // 0x0019ed58: lw $a2, -0x48($at)
    if (v1 == a2) goto label_0x19edf4;                          // 0x0019ed5c: beq $v1, $a2, 0x19edf4
    /* nop */                                                   // 0x0019ed60: nop 
    v1 = v1 - a2;                                               // 0x0019ed64: subu $v1, $v1, $a2
    v1 = ((unsigned)v1 < (unsigned)a0) ? 1 : 0;                 // 0x0019ed68: sltu $v1, $v1, $a0
    if (v1 != 0) goto label_0x19edf4;                           // 0x0019ed6c: bnez $v1, 0x19edf4
    /* nop */                                                   // 0x0019ed70: nop 
    goto label_0x19ee00;                                        // 0x0019ed74: b 0x19ee00
label_0x19ed7c:
    a2 = *(int16_t*)((v0) + 0x14);                              // 0x0019ed7c: lh $a2, 0x14($v0)
    v1 = *(int16_t*)((v0) + 0x16);                              // 0x0019ed80: lh $v1, 0x16($v0)
    t1 = *(int32_t*)((v0) + 4);                                 // 0x0019ed84: lw $t1, 4($v0)
    a2 = a2 + v1;                                               // 0x0019ed88: addu $a2, $a2, $v1
    v1 = a2 + a1;                                               // 0x0019ed8c: addu $v1, $a2, $a1
    if (t1 != 0) goto label_0x19edc4;                           // 0x0019ed90: bnez $t1, 0x19edc4
    t0 = a3 & v1;                                               // 0x0019ed94: and $t0, $a3, $v1
    v1 = (a2 < 0x4000) ? 1 : 0;                                 // 0x0019ed98: slti $v1, $a2, 0x4000
    if (v1 != 0) goto label_0x19edac;                           // 0x0019ed9c: bnez $v1, 0x19edac
    v1 = t0 + a0;                                               // 0x0019eda0: addu $v1, $t0, $a0
    goto label_0x19ee00;                                        // 0x0019eda4: b 0x19ee00
    v0 = -1;                                                    // 0x0019eda8: addiu $v0, $zero, -1
label_0x19edac:
    v1 = ((unsigned)v1 < (unsigned)0x4000) ? 1 : 0;             // 0x0019edac: sltiu $v1, $v1, 0x4000
    if (v1 != 0) goto label_0x19edbc;                           // 0x0019edb0: bnez $v1, 0x19edbc
    /* nop */                                                   // 0x0019edb4: nop 
    v0 = -1;                                                    // 0x0019edb8: addiu $v0, $zero, -1
label_0x19edbc:
    goto label_0x19ee00;                                        // 0x0019edbc: b 0x19ee00
    /* nop */                                                   // 0x0019edc0: nop 
label_0x19edc4:
    v1 = *(int16_t*)((t1) + 0x14);                              // 0x0019edc4: lh $v1, 0x14($t1)
    at = ((unsigned)t0 < (unsigned)v1) ? 1 : 0;                 // 0x0019edc8: sltu $at, $t0, $v1
    if (at == 0) goto label_0x19edec;                           // 0x0019edcc: beqz $at, 0x19edec
    /* nop */                                                   // 0x0019edd0: nop 
    v1 = v1 - t0;                                               // 0x0019edd4: subu $v1, $v1, $t0
    v1 = ((unsigned)v1 < (unsigned)a0) ? 1 : 0;                 // 0x0019edd8: sltu $v1, $v1, $a0
    if (v1 != 0) goto label_0x19edec;                           // 0x0019eddc: bnez $v1, 0x19edec
    /* nop */                                                   // 0x0019ede0: nop 
    goto label_0x19ee00;                                        // 0x0019ede4: b 0x19ee00
    /* nop */                                                   // 0x0019ede8: nop 
label_0x19edec:
    goto label_0x19ed7c;                                        // 0x0019edec: b 0x19ed7c
label_0x19edf4:
    a1 = a1 + -1;                                               // 0x0019edf4: addiu $a1, $a1, -1
    goto label_0x19ed7c;                                        // 0x0019edf8: b 0x19ed7c
    a3 = ~a1;                                                   // 0x0019edfc: not $a3, $a1
label_0x19ee00:
    return;                                                     // 0x0019ee00: jr $ra
    /* nop */                                                   // 0x0019ee04: nop 
}