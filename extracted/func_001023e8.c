void func_001023e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001023e8: addiu $sp, $sp, -0x20
    func_001024b8();  // 1024b8                                // 0x001023f4: jal 0x1024b8
    v0 = (v1 < 4) ? 1 : 0;                                      // 0x00102400: slti $v0, $v1, 4
    if (v0 == 0) goto label_0x102428;                           // 0x00102404: beqz $v0, 0x102428
    if (v1 <= 0) goto label_0x10242c;                           // 0x0010240c: blez $v1, 0x10242c
    func_00102510();  // 102510                                // 0x00102414: jal 0x102510
    s0 = 1;                                                     // 0x00102418: addiu $s0, $zero, 1
    func_00102500();  // 102500                                // 0x0010241c: jal 0x102500
label_0x102428:
label_0x10242c:
    return;                                                     // 0x00102430: jr $ra
    sp = sp + 0x20;                                             // 0x00102434: addiu $sp, $sp, 0x20
}