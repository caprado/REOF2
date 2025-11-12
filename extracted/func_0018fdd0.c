void func_0018fdd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x0018fdd0: addiu $sp, $sp, -0x60
    FPU_F12 = *(float*)(a1);  // Load float                     // 0x0018fddc: lwc1 $f12, 0($a1)
    FPU_F13 = *(float*)((a1) + 4);  // Load float               // 0x0018fde4: lwc1 $f13, 4($a1)
    FPU_F14 = *(float*)((a1) + 8);  // Load float               // 0x0018fde8: lwc1 $f14, 8($a1)
    func_0018fd90();  // 0x18fc60                                // 0x0018fdec: jal 0x18fc60
    a0 = sp + 0x20;                                             // 0x0018fdf0: addiu $a0, $sp, 0x20
    func_001911e0();  // 0x191190                                // 0x0018fdf8: jal 0x191190
    a1 = sp + 0x20;                                             // 0x0018fdfc: addiu $a1, $sp, 0x20
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018fe04: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018fe08: jr $ra
    sp = sp + 0x60;                                             // 0x0018fe0c: addiu $sp, $sp, 0x60
}