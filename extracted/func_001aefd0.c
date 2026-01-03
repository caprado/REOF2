/** @category graphics/render @status complete @author caprado */
void func_001aefd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    return func_001972e0();  // Tail call                        // 0x001aefd0: j 0x196050
    a0 = a0 & 0xff;                                             // 0x001aefd4: andi $a0, $a0, 0xff
    /* nop */                                                   // 0x001aefd8: nop 
    /* nop */                                                   // 0x001aefdc: nop 
    sp = sp + -0x20;                                            // 0x001aefe0: addiu $sp, $sp, -0x20
    func_001a0980();  // 1a0980                                // 0x001aefec: jal 0x1a0980
    at = 0x31 << 16;                                            // 0x001aeff4: lui $at, 0x31
    g_003137ac = s0;  // Global at 0x003137ac                   // 0x001aeff8: sb $s0, 0x37ac($at)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001af000: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001af004: jr $ra
    sp = sp + 0x20;                                             // 0x001af008: addiu $sp, $sp, 0x20
}