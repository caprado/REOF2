void func_00101e50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00101e50: addiu $sp, $sp, -0x20
    func_00101fc0();  // 0x101f80                                // 0x00101e5c: jal 0x101f80
    v0 = ((unsigned)v1 < (unsigned)5) ? 1 : 0;                  // 0x00101e68: sltiu $v0, $v1, 5
    if (v0 == 0) goto label_0x101e9c;                           // 0x00101e6c: beqz $v0, 0x101e9c
    v0 = 0x22 << 16;                                            // 0x00101e70: lui $v0, 0x22
    v1 = v1 << 2;                                               // 0x00101e74: sll $v1, $v1, 2
    v0 = v0 + -0xc0;                                            // 0x00101e78: addiu $v0, $v0, -0xc0
    v1 = v1 + v0;                                               // 0x00101e7c: addu $v1, $v1, $v0
    a0 = *(int32_t*)(v1);                                       // 0x00101e80: lw $a0, 0($v1)
    /* jump to address in a0 */                                 // 0x00101e84: jr $a0
    /* nop */                                                   // 0x00101e88: nop 
    v0 = v0 | 1;                                                // 0x00101e90: ori $v0, $v0, 1
    s0 = 1;                                                     // 0x00101e98: addiu $s0, $zero, 1
label_0x101e9c:
    return;                                                     // 0x00101ea8: jr $ra
    sp = sp + 0x20;                                             // 0x00101eac: addiu $sp, $sp, 0x20
}