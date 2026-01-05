void func_00108da8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00108da8: addiu $sp, $sp, -0x10
    v0 = (s0 < 0x18) ? 1 : 0;                                   // 0x00108db4: slti $v0, $s0, 0x18
    a0 = 0 | 0xffc0;                                            // 0x00108db8: ori $a0, $zero, 0xffc0
    if (v0 == 0) goto label_0x108de0;                           // 0x00108dc0: beqz $v0, 0x108de0
    v1 = s0 << 3;                                               // 0x00108dc8: sll $v1, $s0, 3
    v0 = 0x22 << 16;                                            // 0x00108dcc: lui $v0, 0x22
    v0 = v0 + v1;                                               // 0x00108dd0: addu $v0, $v0, $v1
    goto label_0x108e0c;                                        // 0x00108dd8: b 0x108e0c
label_0x108de0:
    if (s0 <= 0) goto label_0x108e04;                           // 0x00108de0: blez $s0, 0x108e04
    /* nop */                                                   // 0x00108de4: nop 
label_0x108de8:
    a1 = 0 | 0x8048;                                            // 0x00108de8: ori $a1, $zero, 0x8048
    func_00111a58();  // 111a58                                // 0x00108df0: jal 0x111a58
    s0 = s0 + -1;                                               // 0x00108df4: addiu $s0, $s0, -1
    if (s0 > 0) goto label_0x108de8;                            // 0x00108dfc: bgtz $s0, 0x108de8
    /* nop */                                                   // 0x00108e00: nop 
label_0x108e04:
label_0x108e0c:
    return;                                                     // 0x00108e10: jr $ra
    sp = sp + 0x10;                                             // 0x00108e14: addiu $sp, $sp, 0x10
}