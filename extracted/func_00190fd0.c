void func_00190fd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00190fd0: addiu $sp, $sp, -0x30
    FPU_F0 = *(float*)((a0) + 0x30);  // Load float             // 0x00190fdc: lwc1 $f0, 0x30($a0)
    /* FPU: neg.s $f0, $f0 */                                   // 0x00190fe4: neg.s $f0, $f0
    *(float*)((sp) + 0x20) = FPU_F0;  // Store float            // 0x00190fe8: swc1 $f0, 0x20($sp)
    FPU_F0 = *(float*)((a0) + 0x34);  // Load float             // 0x00190fec: lwc1 $f0, 0x34($a0)
    /* FPU: neg.s $f0, $f0 */                                   // 0x00190ff0: neg.s $f0, $f0
    *(float*)((sp) + 0x24) = FPU_F0;  // Store float            // 0x00190ff4: swc1 $f0, 0x24($sp)
    FPU_F0 = *(float*)((a0) + 0x38);  // Load float             // 0x00190ff8: lwc1 $f0, 0x38($a0)
    /* FPU: neg.s $f0, $f0 */                                   // 0x00190ffc: neg.s $f0, $f0
    func_00190fd0();  // 0x190f80                                // 0x00191000: jal 0x190f80
    *(float*)((sp) + 0x28) = FPU_F0;  // Store float            // 0x00191004: swc1 $f0, 0x28($sp)
    a0 = s0 + 0x30;                                             // 0x00191008: addiu $a0, $s0, 0x30
    func_00191860();  // 0x191780                                // 0x00191010: jal 0x191780
    a1 = sp + 0x20;                                             // 0x00191014: addiu $a1, $sp, 0x20
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019101c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00191020: jr $ra
    sp = sp + 0x30;                                             // 0x00191024: addiu $sp, $sp, 0x30
}