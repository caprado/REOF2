void func_00191ec0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00191ec0: addiu $sp, $sp, -0x20
    v0 = 0x3f80 << 16;                                          // 0x00191ec4: lui $v0, 0x3f80
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x00191ecc: swc1 $f20, 0($sp)
    /* FPU: mov.s $f20, $f12 */                                 // 0x00191ed0: mov.s $f20, $f12
    /* FPU: neg.s $f0, $f20 */                                  // 0x00191ed4: neg.s $f0, $f20
    /* FPU: mul.s $f1, $f0, $f20 */                             // 0x00191ed8: mul.s $f1, $f0, $f20
    /* move to FPU: $v0, $f0 */                                 // 0x00191edc: mtc1 $v0, $f0
    func_00192200();  // 0x191fd0                                // 0x00191ee0: jal 0x191fd0
    /* FPU: add.s $f12, $f0, $f1 */                             // 0x00191ee4: add.s $f12, $f0, $f1
    /* nop */                                                   // 0x00191ee8: nop 
    /* nop */                                                   // 0x00191eec: nop 
    /* FPU: div.s $f12, $f20, $f0 */                            // 0x00191ef0: div.s $f12, $f20, $f0
    /* nop */                                                   // 0x00191ef4: nop 
    /* nop */                                                   // 0x00191ef8: nop 
    func_00191f20();  // 0x191f20                               // 0x00191efc: jal 0x191f20
    /* nop */                                                   // 0x00191f00: nop 
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x00191f08: lwc1 $f20, 0($sp)
    return;                                                     // 0x00191f0c: jr $ra
    sp = sp + 0x20;                                             // 0x00191f10: addiu $sp, $sp, 0x20
}