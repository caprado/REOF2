void func_00120c28() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x10;                                            // 0x00120c28: addiu $sp, $sp, -0x10
    /* FPU: mov.s $f0, $f12 */                                  // 0x00120c2c: mov.s $f0, $f12
    *(float*)(sp) = FPU_F0;  // Store float                     // 0x00120c30: swc1 $f0, 0($sp)
    v1 = 0x7fff << 16;                                          // 0x00120c34: lui $v1, 0x7fff
    a2 = local_0;                                               // 0x00120c38: lw $a2, 0($sp)
    /* FPU: cvt.w.s $f0, $f12 */                                // 0x00120c3c: cvt.w.s $f0, $f12
    /* move from FPU: $a1, $f0 */                               // 0x00120c40: mfc1 $a1, $f0
    v1 = v1 | 0xffff;                                           // 0x00120c44: ori $v1, $v1, 0xffff
    v0 = 0x31ff << 16;                                          // 0x00120c48: lui $v0, 0x31ff
    v1 = a2 & v1;                                               // 0x00120c4c: and $v1, $a2, $v1
    a0 = 0x3e99 << 16;                                          // 0x00120c50: lui $a0, 0x3e99
    v0 = v0 | 0xffff;                                           // 0x00120c54: ori $v0, $v0, 0xffff
    a0 = a0 | 0x9999;                                           // 0x00120c58: ori $a0, $a0, 0x9999
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x00120c5c: slt $v0, $v0, $v1
    if (v0 != 0) goto label_0x120c78;                           // 0x00120c60: bnez $v0, 0x120c78
    a0 = (a0 < v1) ? 1 : 0;                                     // 0x00120c64: slt $a0, $a0, $v1
    at = 0x3f80 << 16;                                          // 0x00120c68: lui $at, 0x3f80
    /* move to FPU: $at, $f0 */                                 // 0x00120c6c: mtc1 $at, $f0
    if (a1 == 0) goto label_0x120d70;                           // 0x00120c70: beqz $a1, 0x120d70
    /* nop */                                                   // 0x00120c74: nop 
label_0x120c78:
    /* FPU: mul.s $f4, $f12, $f12 */                            // 0x00120c78: mul.s $f4, $f12, $f12
    at = 0xad47 << 16;                                          // 0x00120c7c: lui $at, 0xad47
    at = at | 0xd74e;                                           // 0x00120c80: ori $at, $at, 0xd74e
    /* move to FPU: $at, $f0 */                                 // 0x00120c84: mtc1 $at, $f0
    at = 0x310f << 16;                                          // 0x00120c88: lui $at, 0x310f
    at = at | 0x74f5;                                           // 0x00120c8c: ori $at, $at, 0x74f5
    /* move to FPU: $at, $f1 */                                 // 0x00120c90: mtc1 $at, $f1
    /* FPU: mul.s $f0, $f4, $f0 */                              // 0x00120c94: mul.s $f0, $f4, $f0
    /* FPU: add.s $f0, $f0, $f1 */                              // 0x00120c98: add.s $f0, $f0, $f1
    at = 0xb493 << 16;                                          // 0x00120c9c: lui $at, 0xb493
    at = at | 0xf27b;                                           // 0x00120ca0: ori $at, $at, 0xf27b
    /* move to FPU: $at, $f1 */                                 // 0x00120ca4: mtc1 $at, $f1
    /* FPU: mul.s $f0, $f4, $f0 */                              // 0x00120ca8: mul.s $f0, $f4, $f0
    /* FPU: add.s $f0, $f0, $f1 */                              // 0x00120cac: add.s $f0, $f0, $f1
    at = 0x37d0 << 16;                                          // 0x00120cb0: lui $at, 0x37d0
    at = at | 0xd00;                                            // 0x00120cb4: ori $at, $at, 0xd00
    /* move to FPU: $at, $f1 */                                 // 0x00120cb8: mtc1 $at, $f1
    /* FPU: mul.s $f0, $f4, $f0 */                              // 0x00120cbc: mul.s $f0, $f4, $f0
    /* FPU: add.s $f0, $f0, $f1 */                              // 0x00120cc0: add.s $f0, $f0, $f1
    at = 0xbab6 << 16;                                          // 0x00120cc4: lui $at, 0xbab6
    at = at | 0xb60;                                            // 0x00120cc8: ori $at, $at, 0xb60
    /* move to FPU: $at, $f1 */                                 // 0x00120ccc: mtc1 $at, $f1
    /* FPU: mul.s $f0, $f4, $f0 */                              // 0x00120cd0: mul.s $f0, $f4, $f0
    /* FPU: add.s $f0, $f0, $f1 */                              // 0x00120cd4: add.s $f0, $f0, $f1
    at = 0x3d2a << 16;                                          // 0x00120cd8: lui $at, 0x3d2a
    at = at | 0xaaaa;                                           // 0x00120cdc: ori $at, $at, 0xaaaa
    /* move to FPU: $at, $f1 */                                 // 0x00120ce0: mtc1 $at, $f1
    /* FPU: mul.s $f0, $f4, $f0 */                              // 0x00120ce4: mul.s $f0, $f4, $f0
    /* FPU: add.s $f0, $f0, $f1 */                              // 0x00120ce8: add.s $f0, $f0, $f1
    if (a0 != 0) goto label_0x120d20;                           // 0x00120cec: bnez $a0, 0x120d20
    /* FPU: mul.s $f1, $f4, $f0 */                              // 0x00120cf0: mul.s $f1, $f4, $f0
    /* FPU: mul.s $f1, $f4, $f1 */                              // 0x00120cf4: mul.s $f1, $f4, $f1
    at = 0x3f00 << 16;                                          // 0x00120cf8: lui $at, 0x3f00
    /* move to FPU: $at, $f0 */                                 // 0x00120cfc: mtc1 $at, $f0
    /* FPU: mul.s $f2, $f12, $f13 */                            // 0x00120d00: mul.s $f2, $f12, $f13
    at = 0x3f80 << 16;                                          // 0x00120d04: lui $at, 0x3f80
    /* move to FPU: $at, $f3 */                                 // 0x00120d08: mtc1 $at, $f3
    /* FPU: mul.s $f0, $f4, $f0 */                              // 0x00120d0c: mul.s $f0, $f4, $f0
    /* FPU: sub.s $f1, $f1, $f2 */                              // 0x00120d10: sub.s $f1, $f1, $f2
    /* FPU: sub.s $f0, $f0, $f1 */                              // 0x00120d14: sub.s $f0, $f0, $f1
    goto label_0x120d70;                                        // 0x00120d18: b 0x120d70
    /* FPU: sub.s $f0, $f3, $f0 */                              // 0x00120d1c: sub.s $f0, $f3, $f0
label_0x120d20:
    v0 = 0x3f48 << 16;                                          // 0x00120d20: lui $v0, 0x3f48
    at = 0x3e90 << 16;                                          // 0x00120d24: lui $at, 0x3e90
    /* move to FPU: $at, $f5 */                                 // 0x00120d28: mtc1 $at, $f5
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x00120d2c: slt $v0, $v0, $v1
    if (v0 != 0) goto label_0x120d40;                           // 0x00120d30: bnez $v0, 0x120d40
    v0 = 0xff00 << 16;                                          // 0x00120d34: lui $v0, 0xff00
    v1 = v1 + v0;                                               // 0x00120d38: addu $v1, $v1, $v0
    /* move to FPU: $v1, $f5 */                                 // 0x00120d3c: mtc1 $v1, $f5
label_0x120d40:
    at = 0x3f00 << 16;                                          // 0x00120d40: lui $at, 0x3f00
    /* move to FPU: $at, $f0 */                                 // 0x00120d44: mtc1 $at, $f0
    /* FPU: mul.s $f2, $f4, $f1 */                              // 0x00120d48: mul.s $f2, $f4, $f1
    /* FPU: mul.s $f3, $f12, $f13 */                            // 0x00120d4c: mul.s $f3, $f12, $f13
    at = 0x3f80 << 16;                                          // 0x00120d50: lui $at, 0x3f80
    /* move to FPU: $at, $f1 */                                 // 0x00120d54: mtc1 $at, $f1
    /* FPU: mul.s $f0, $f4, $f0 */                              // 0x00120d58: mul.s $f0, $f4, $f0
    /* FPU: sub.s $f1, $f1, $f5 */                              // 0x00120d5c: sub.s $f1, $f1, $f5
    /* FPU: sub.s $f2, $f2, $f3 */                              // 0x00120d60: sub.s $f2, $f2, $f3
    /* FPU: sub.s $f0, $f0, $f5 */                              // 0x00120d64: sub.s $f0, $f0, $f5
    /* FPU: sub.s $f0, $f0, $f2 */                              // 0x00120d68: sub.s $f0, $f0, $f2
    /* FPU: sub.s $f0, $f1, $f0 */                              // 0x00120d6c: sub.s $f0, $f1, $f0
label_0x120d70:
    return;                                                     // 0x00120d70: jr $ra
    sp = sp + 0x10;                                             // 0x00120d74: addiu $sp, $sp, 0x10
}