void func_001392e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001392e8: addiu $sp, $sp, -0x20
    a0 = 0 | 0x8000;                                            // 0x001392f4: ori $a0, $zero, 0x8000
    func_00137ec8();  // 137ec8                                // 0x00139300: jal 0x137ec8
    v0 = 0x20 << 16;                                            // 0x00139308: lui $v0, 0x20
    a2 = g_002031ec;  // Global at 0x002031ec                   // 0x0013930c: lw $a2, 0x31ec($v0)
    func_00100858();  // 100858                                // 0x00139314: jal 0x100858
    a0 = 0 | 0x8001;                                            // 0x0013931c: ori $a0, $zero, 0x8001
    func_00137ec8();  // 137ec8                                // 0x00139320: jal 0x137ec8
    return;                                                     // 0x00139338: jr $ra
    sp = sp + 0x20;                                             // 0x0013933c: addiu $sp, $sp, 0x20
}