void func_00102388() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00102388: addiu $sp, $sp, -0x20
    func_001024b8();  // 1024b8                                // 0x00102394: jal 0x1024b8
    v0 = ((unsigned)v1 < (unsigned)5) ? 1 : 0;                  // 0x001023a0: sltiu $v0, $v1, 5
    if (v0 == 0) goto label_0x1023d4;                           // 0x001023a4: beqz $v0, 0x1023d4
    v0 = 0x22 << 16;                                            // 0x001023a8: lui $v0, 0x22
    v1 = v1 << 2;                                               // 0x001023ac: sll $v1, $v1, 2
    v0 = v0 + -0xa0;                                            // 0x001023b0: addiu $v0, $v0, -0xa0
    v1 = v1 + v0;                                               // 0x001023b4: addu $v1, $v1, $v0
    a0 = *(int32_t*)(v1);                                       // 0x001023b8: lw $a0, 0($v1)
    /* jump to address in a0 */                                 // 0x001023bc: jr $a0
    /* nop */                                                   // 0x001023c0: nop 
    v0 = v0 | 0x100;                                            // 0x001023c8: ori $v0, $v0, 0x100
    s0 = 1;                                                     // 0x001023d0: addiu $s0, $zero, 1
label_0x1023d4:
    return;                                                     // 0x001023e0: jr $ra
    sp = sp + 0x20;                                             // 0x001023e4: addiu $sp, $sp, 0x20
}