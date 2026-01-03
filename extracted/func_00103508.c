void func_00103508() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00103508: addiu $sp, $sp, -0x20
    func_00102f28();  // 102f28                                // 0x00103514: jal 0x102f28
    v0 = *(int32_t*)(s0);                                       // 0x0010351c: lw $v0, 0($s0)
    v1 = -0xd;                                                  // 0x00103520: addiu $v1, $zero, -0xd
    a0 = -2;                                                    // 0x00103524: addiu $a0, $zero, -2
    *(uint32_t*)((s0) + 0x20) = 0;                              // 0x00103528: sw $zero, 0x20($s0)
    v0 = v0 & v1;                                               // 0x0010352c: and $v0, $v0, $v1
    v0 = v0 | 4;                                                // 0x00103534: ori $v0, $v0, 4
    v0 = v0 & a0;                                               // 0x00103538: and $v0, $v0, $a0
    v0 = v0 | 0x100;                                            // 0x0010353c: ori $v0, $v0, 0x100
    *(uint32_t*)(s0) = v0;                                      // 0x00103540: sw $v0, 0($s0)
    return;                                                     // 0x00103548: jr $ra
    sp = sp + 0x20;                                             // 0x0010354c: addiu $sp, $sp, 0x20
}