void func_00191ca0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x4334 << 16;                                          // 0x00191ca0: lui $v0, 0x4334
    /* move to FPU: $v0, $f2 */                                 // 0x00191ca4: mtc1 $v0, $f2
    FPU_F1 = *(float*)((gp) + -0x7fc8);  // Load float          // 0x00191ca8: lwc1 $f1, -0x7fc8($gp)
    /* FPU: mul.s $f2, $f2, $f12 */                             // 0x00191cac: mul.s $f2, $f2, $f12
    /* FPU: div.s $f2, $f2, $f1 */                              // 0x00191cb0: div.s $f2, $f2, $f1
    /* move to FPU: $zero, $f0 */                               // 0x00191cb4: mtc1 $zero, $f0
    /* nop */                                                   // 0x00191cb8: nop 
    /* nop */                                                   // 0x00191cbc: nop 
    /* FPU: c.olt.s $f2, $f0 */                                 // 0x00191cc0: c.olt.s $f2, $f0
    /* bc1f 0x191cd8 */                                         // 0x00191cc4: bc1f 0x191cd8
    v0 = 0x43b4 << 16;                                          // 0x00191cc8: lui $v0, 0x43b4
    /* move to FPU: $v0, $f0 */                                 // 0x00191ccc: mtc1 $v0, $f0
    /* nop */                                                   // 0x00191cd0: nop 
    /* FPU: add.s $f2, $f2, $f0 */                              // 0x00191cd4: add.s $f2, $f2, $f0
    FPU_F1 = *(float*)((gp) + -0x7fc4);  // Load float          // 0x00191cd8: lwc1 $f1, -0x7fc4($gp)
    v0 = 0x4f00 << 16;                                          // 0x00191cdc: lui $v0, 0x4f00
    /* move to FPU: $v0, $f0 */                                 // 0x00191ce0: mtc1 $v0, $f0
    /* nop */                                                   // 0x00191ce4: nop 
    /* FPU: mul.s $f1, $f1, $f2 */                              // 0x00191ce8: mul.s $f1, $f1, $f2
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x00191cec: c.ole.s $f0, $f1
    /* bc1t 0x191d08 */                                         // 0x00191cf0: bc1t 0x191d08
    /* nop */                                                   // 0x00191cf4: nop 
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x00191cf8: cvt.w.s $f1, $f1
    /* move from FPU: $v0, $f1 */                               // 0x00191cfc: mfc1 $v0, $f1
    goto label_0x191d20;                                        // 0x00191d00: b 0x191d20
    /* nop */                                                   // 0x00191d04: nop 
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x00191d08: sub.s $f1, $f1, $f0
    v1 = 0x8000 << 16;                                          // 0x00191d0c: lui $v1, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x00191d10: cvt.w.s $f1, $f1
    /* move from FPU: $v0, $f1 */                               // 0x00191d14: mfc1 $v0, $f1
    /* nop */                                                   // 0x00191d18: nop 
    v0 = v0 | v1;                                               // 0x00191d1c: or $v0, $v0, $v1
label_0x191d20:
    return;                                                     // 0x00191d20: jr $ra
    /* nop */                                                   // 0x00191d24: nop 
}