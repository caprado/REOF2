void func_00103550() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00103550: addiu $sp, $sp, -0x40
    func_00103048();  // 0x103020                                // 0x0010356c: jal 0x103020
    func_00102f98();  // 0x102f28                                // 0x00103578: jal 0x102f28
    v0 = 0xffff << 16;                                          // 0x00103580: lui $v0, 0xffff
    v1 = *(int32_t*)((s0) + 0x10);                              // 0x00103584: lw $v1, 0x10($s0)
    v0 = v0 | 0xffff;                                           // 0x00103588: ori $v0, $v0, 0xffff
    if (v1 != v0) goto label_0x103594;                          // 0x0010358c: bnel $v1, $v0, 0x103594
    *(uint32_t*)((s0) + 0x10) = s1;                             // 0x00103590: sw $s1, 0x10($s0)
label_0x103594:
    v0 = *(int32_t*)(s0);                                       // 0x00103594: lw $v0, 0($s0)
    v1 = -0xd;                                                  // 0x00103598: addiu $v1, $zero, -0xd
    a0 = -2;                                                    // 0x0010359c: addiu $a0, $zero, -2
    *(uint32_t*)((s0) + 0x20) = s2;                             // 0x001035a0: sw $s2, 0x20($s0)
    v0 = v0 & v1;                                               // 0x001035a4: and $v0, $v0, $v1
    v0 = v0 & a0;                                               // 0x001035ac: and $v0, $v0, $a0
    v0 = v0 | 0x100;                                            // 0x001035b4: ori $v0, $v0, 0x100
    *(uint32_t*)(s0) = v0;                                      // 0x001035bc: sw $v0, 0($s0)
    return;                                                     // 0x001035c4: jr $ra
    sp = sp + 0x40;                                             // 0x001035c8: addiu $sp, $sp, 0x40
}