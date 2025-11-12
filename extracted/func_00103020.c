void func_00103020() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 7;                                                     // 0x00103020: addiu $v1, $zero, 7
    v0 = (unsigned)a0 >> 0x1c;                                  // 0x00103024: srl $v0, $a0, 0x1c
    if (v0 != v1) goto label_0x103040;                          // 0x00103028: bne $v0, $v1, 0x103040
    v0 = 0xfff << 16;                                           // 0x0010302c: lui $v0, 0xfff
    v1 = 0x8000 << 16;                                          // 0x00103030: lui $v1, 0x8000
    v0 = v0 | 0xffff;                                           // 0x00103034: ori $v0, $v0, 0xffff
    a0 = a0 & v0;                                               // 0x00103038: and $a0, $a0, $v0
    a0 = a0 | v1;                                               // 0x0010303c: or $a0, $a0, $v1
label_0x103040:
    return;                                                     // 0x00103040: jr $ra
}