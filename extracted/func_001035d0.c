void func_001035d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001035d0: addiu $sp, $sp, -0x40
    func_00103020();  // 103020                                // 0x001035ec: jal 0x103020
    func_00102f28();  // 102f28                                // 0x001035f8: jal 0x102f28
    v0 = 0xffff << 16;                                          // 0x00103600: lui $v0, 0xffff
    v1 = *(int32_t*)((s0) + 0x10);                              // 0x00103604: lw $v1, 0x10($s0)
    v0 = v0 | 0xffff;                                           // 0x00103608: ori $v0, $v0, 0xffff
    if (v1 != v0) goto label_0x103614;                          // 0x0010360c: bnel $v1, $v0, 0x103614
    *(uint32_t*)((s0) + 0x10) = s1;                             // 0x00103610: sw $s1, 0x10($s0)
label_0x103614:
    v0 = *(int32_t*)(s0);                                       // 0x00103614: lw $v0, 0($s0)
    v1 = -0xd;                                                  // 0x00103618: addiu $v1, $zero, -0xd
    a0 = -2;                                                    // 0x0010361c: addiu $a0, $zero, -2
    *(uint32_t*)((s0) + 0x20) = s2;                             // 0x00103620: sw $s2, 0x20($s0)
    v0 = v0 & v1;                                               // 0x00103624: and $v0, $v0, $v1
    v0 = v0 | 8;                                                // 0x0010362c: ori $v0, $v0, 8
    v0 = v0 & a0;                                               // 0x00103634: and $v0, $v0, $a0
    v0 = v0 | 0x100;                                            // 0x0010363c: ori $v0, $v0, 0x100
    *(uint32_t*)(s0) = v0;                                      // 0x00103640: sw $v0, 0($s0)
    return;                                                     // 0x00103648: jr $ra
    sp = sp + 0x40;                                             // 0x0010364c: addiu $sp, $sp, 0x40
}