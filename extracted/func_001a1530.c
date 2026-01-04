/** @category: graphics/init @status: complete @author: caprado */
void func_001a1530() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001a1530: addiu $sp, $sp, -0x20
    func_001a5890();  // 1a5890                                // 0x001a1538: jal 0x1a5890
    func_001a1590();  // 1a1590                                // 0x001a1540: jal 0x1a1590
    v0 = 0x2a << 16;                                            // 0x001a1548: lui $v0, 0x2a
    a0 = 0x23 << 16;                                            // 0x001a154c: lui $a0, 0x23
    v0 = v0 + 0x480;                                            // 0x001a1550: addiu $v0, $v0, 0x480
    a0 = a0 + -0x5d38;                                          // 0x001a1554: addiu $a0, $a0, -0x5d38
    *(uint32_t*)((gp) + -0x6430) = v0;                          // 0x001a1558: sw $v0, -0x6430($gp)
    func_001a15a0();  // 1a15a0                                // 0x001a1560: jal 0x1a15a0
    *(uint32_t*)((gp) + -0x642c) = v0;                          // 0x001a1564: sw $v0, -0x642c($gp)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a1570: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a1574: jr $ra
    sp = sp + 0x20;                                             // 0x001a1578: addiu $sp, $sp, 0x20
}