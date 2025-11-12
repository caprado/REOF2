void func_0015aec8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015aec8: addiu $sp, $sp, -0x10
    func_0015afa0();  // 0x15af18                                // 0x0015aed4: jal 0x15af18
    a1 = 0x21 << 16;                                            // 0x0015aedc: lui $a1, 0x21
    a1 = a1 + 0x3ee8;                                           // 0x0015aee4: addiu $a1, $a1, 0x3ee8
    if (s0 == 0) goto label_0x15af04;                           // 0x0015aee8: beqz $s0, 0x15af04
    a2 = 0x100;                                                 // 0x0015aeec: addiu $a2, $zero, 0x100
    func_00155f90();  // 0x155db0                                // 0x0015aef0: jal 0x155db0
    /* nop */                                                   // 0x0015aef4: nop 
    v1 = 0x21 << 16;                                            // 0x0015aef8: lui $v1, 0x21
    v0 = s0 + 0x180;                                            // 0x0015aefc: addiu $v0, $s0, 0x180
    g_00213edc = v0;  // Global at 0x00213edc                   // 0x0015af00: sw $v0, 0x3edc($v1)
label_0x15af04:
    return;                                                     // 0x0015af0c: jr $ra
    sp = sp + 0x10;                                             // 0x0015af10: addiu $sp, $sp, 0x10
}