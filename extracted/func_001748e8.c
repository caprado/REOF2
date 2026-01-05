void func_001748e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x40;                                            // 0x001748e8: addiu $sp, $sp, -0x40
    s0 = v0 + 0x2ab0;                                           // 0x001748fc: addiu $s0, $v0, 0x2ab0
    func_00169af0();  // 169af0                                // 0x00174914: jal 0x169af0
    *(uint32_t*)(s1) = 0;                                       // 0x00174918: sw $zero, 0($s1)
    if (v0 == 0) goto label_0x174940;                           // 0x00174920: beqz $v0, 0x174940
    a1 = 0xff00 << 16;                                          // 0x00174928: lui $a1, 0xff00
    func_001698d0();  // 1698d0                                // 0x0017492c: jal 0x1698d0
    a1 = a1 | 0x156;                                            // 0x00174930: ori $a1, $a1, 0x156
    goto label_0x174970;                                        // 0x00174934: b 0x174970
    /* nop */                                                   // 0x0017493c: nop 
label_0x174940:
    func_00174878();  // 174878                                // 0x00174940: jal 0x174878
    a0 = *(int32_t*)(s0);                                       // 0x00174944: lw $a0, 0($s0)
    v1 = local_0;                                               // 0x0017494c: lw $v1, 0($sp)
    if (v1 == 0) goto label_0x17496c;                           // 0x00174958: beqz $v1, 0x17496c
    func_00174988();  // 174988                                // 0x00174960: jal 0x174988
    a0 = *(int32_t*)(s0);                                       // 0x00174964: lw $a0, 0($s0)
label_0x17496c:
label_0x174970:
    return;                                                     // 0x00174980: jr $ra
    sp = sp + 0x40;                                             // 0x00174984: addiu $sp, $sp, 0x40
}