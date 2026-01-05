void func_001483c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001483c0: addiu $sp, $sp, -0x30
    func_00143c48();  // 143c48                                // 0x001483d4: jal 0x143c48
    a0 = 1;                                                     // 0x001483d8: addiu $a0, $zero, 1
    s1 = 0x7000 << 16;                                          // 0x001483dc: lui $s1, 0x7000
    v0 = 0x7000 << 16;                                          // 0x001483e0: lui $v0, 0x7000
    v1 = 0x7000 << 16;                                          // 0x001483e4: lui $v1, 0x7000
    a0 = 0x7000 << 16;                                          // 0x001483e8: lui $a0, 0x7000
    v0 = v0 | 0x1800;                                           // 0x001483ec: ori $v0, $v0, 0x1800
    v1 = v1 | 0x1b00;                                           // 0x001483f0: ori $v1, $v1, 0x1b00
    a0 = a0 | 0x3300;                                           // 0x001483f4: ori $a0, $a0, 0x3300
    *(uint32_t*)((s0) + 0x5a8) = s1;                            // 0x001483f8: sw $s1, 0x5a8($s0)
    *(uint32_t*)((s0) + 0x5ac) = v0;                            // 0x001483fc: sw $v0, 0x5ac($s0)
    *(uint32_t*)((s0) + 0x6e8) = v1;                            // 0x00148400: sw $v1, 0x6e8($s0)
    *(uint32_t*)((s0) + 0x6ec) = a0;                            // 0x00148404: sw $a0, 0x6ec($s0)
    *(uint32_t*)((s0) + 0x828) = 0;                             // 0x00148408: sw $zero, 0x828($s0)
    return;                                                     // 0x00148418: jr $ra
    sp = sp + 0x30;                                             // 0x0014841c: addiu $sp, $sp, 0x30
}