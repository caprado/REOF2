void func_001dbdc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int8_t*)((gp) + -0x6224);                            // 0x001dbdc0: lb $v1, -0x6224($gp)
    v0 = 0x22 << 16;                                            // 0x001dbdc4: lui $v0, 0x22
    v0 = v0 + -0x360;                                           // 0x001dbdc8: addiu $v0, $v0, -0x360
    a0 = gp + -0x6224;                                          // 0x001dbdcc: addiu $a0, $gp, -0x6224
    v1 = v1 << 2;                                               // 0x001dbdd0: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001dbdd4: addu $v0, $v0, $v1
    v0 = g_0021fca0;  // Global at 0x0021fca0                   // 0x001dbdd8: lw $v0, 0($v0)
    /* jump to address in v0 */                                 // 0x001dbddc: jr $v0
    /* nop */                                                   // 0x001dbde0: nop 
    /* nop */                                                   // 0x001dbde4: nop 
    /* nop */                                                   // 0x001dbde8: nop 
    /* nop */                                                   // 0x001dbdec: nop 
    v1 = *(int8_t*)(a0);                                        // 0x001dbdf0: lb $v1, 0($a0)
    v0 = 1;                                                     // 0x001dbdf4: addiu $v0, $zero, 1
    v1 = v1 + 1;                                                // 0x001dbdf8: addiu $v1, $v1, 1
    return;                                                     // 0x001dbdfc: jr $ra
    *(uint8_t*)(a0) = v1;                                       // 0x001dbe00: sb $v1, 0($a0)
}