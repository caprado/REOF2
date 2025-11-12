void func_00182e98() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x70;                                            // 0x00182e98: addiu $sp, $sp, -0x70
    a2 = 0x898;                                                 // 0x00182e9c: addiu $a2, $zero, 0x898
    v0 = 0x21 << 16;                                            // 0x00182ea4: lui $v0, 0x21
    a0 = 0x184;                                                 // 0x00182eb0: addiu $a0, $zero, 0x184
    v1 = 0x27 << 16;                                            // 0x00182ecc: lui $v1, 0x27
    v0 = v0 + 0x6018;                                           // 0x00182ed4: addiu $v0, $v0, 0x6018
    v1 = v1 + 0x72c8;                                           // 0x00182edc: addiu $v1, $v1, 0x72c8
    *(uint32_t*)(s2) = 0;                                       // 0x00182ee0: sw $zero, 0($s2)
    s3 = a0 + v0;                                               // 0x00182ee4: addu $s3, $a0, $v0
    v1 = v1 + a2;                                               // 0x00182ee8: addu $v1, $v1, $a2
    s0 = g_00277b58;  // Global at 0x00277b58                   // 0x00182eec: lw $s0, 0x890($v1)
    v0 = *(int32_t*)((s3) + 0x170);                             // 0x00182ef0: lw $v0, 0x170($s3)
    v0 = (s0 < v0) ? 1 : 0;                                     // 0x00182ef4: slt $v0, $s0, $v0
    if (v0 == 0) goto label_0x182f44;                           // 0x00182ef8: beqz $v0, 0x182f44
    s5 = 0x8000 << 16;                                          // 0x00182f00: lui $s5, 0x8000
    /* nop */                                                   // 0x00182f04: nop 
label_0x182f08:
    func_00182b88();  // 0x182a70                                // 0x00182f10: jal 0x182a70
    v0 = *(int32_t*)(s2);                                       // 0x00182f1c: lw $v0, 0($s2)
    if (v0 != 0) goto label_0x182f48;                           // 0x00182f20: bnez $v0, 0x182f48
    v0 = *(int32_t*)((s3) + 0x170);                             // 0x00182f28: lw $v0, 0x170($s3)
    a0 = a0 & s5;                                               // 0x00182f2c: and $a0, $a0, $s5
    v1 = s1 + 1;                                                // 0x00182f30: addiu $v1, $s1, 1
    s0 = s0 + 1;                                                // 0x00182f34: addiu $s0, $s0, 1
    v0 = (s0 < v0) ? 1 : 0;                                     // 0x00182f38: slt $v0, $s0, $v0
    if (v0 != 0) goto label_0x182f08;                           // 0x00182f3c: bnez $v0, 0x182f08
    if (a0 == 0) s1 = v1;                                       // 0x00182f40: movz $s1, $v1, $a0
label_0x182f44:
label_0x182f48:
    return;                                                     // 0x00182f64: jr $ra
    sp = sp + 0x70;                                             // 0x00182f68: addiu $sp, $sp, 0x70
}