void func_00135e68() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x170;                                           // 0x00135e68: addiu $sp, $sp, -0x170
    if (s0 == 0) goto label_0x135ea4;                           // 0x00135e90: beqz $s0, 0x135ea4
    v0 = *(int8_t*)(s0);                                        // 0x00135e98: lb $v0, 0($s0)
    if (v0 != 0) goto label_0x135ec8;                           // 0x00135e9c: bnez $v0, 0x135ec8
    /* nop */                                                   // 0x00135ea0: nop 
label_0x135ea4:
    func_00135940();  // 0x1358d8                                // 0x00135ea4: jal 0x1358d8
    v0 = local_0;                                               // 0x00135eac: lb $v0, 0($sp)
    if (v0 != 0) goto label_0x135ee0;                           // 0x00135eb0: bnez $v0, 0x135ee0
    /* nop */                                                   // 0x00135eb4: nop 
    a0 = 0x22 << 16;                                            // 0x00135eb8: lui $a0, 0x22
    goto label_0x135f60;                                        // 0x00135ebc: b 0x135f60
    a0 = &str_002244d8;  // "cvFsGetFreeSize #6:vtbl error"     // 0x00135ec0: addiu $a0, $a0, 0x44d8
    /* nop */                                                   // 0x00135ec4: nop 
label_0x135ec8:
    func_0010af38();  // 0x10ae00                                // 0x00135ec8: jal 0x10ae00
    /* nop */                                                   // 0x00135ecc: nop 
    func_00107b68();  // 0x107ab8                                // 0x00135ed8: jal 0x107ab8
    a2 = v0 + 1;                                                // 0x00135edc: addiu $a2, $v0, 1
label_0x135ee0:
    func_0010af38();  // 0x10ae00                                // 0x00135ee0: jal 0x10ae00
    if (s2 > 0) goto label_0x135f00;                            // 0x00135eec: bgtzl $s2, 0x135f00
    v0 = 0x25 << 16;                                            // 0x00135ef0: lui $v0, 0x25
    a0 = 0x22 << 16;                                            // 0x00135ef4: lui $a0, 0x22
    goto label_0x135f60;                                        // 0x00135ef8: b 0x135f60
    a0 = &str_002244d8;  // "cvFsGetFreeSize #6:vtbl error"     // 0x00135efc: addiu $a0, $a0, 0x44d8
label_0x135f00:
    s3 = v0 + 0x37ec;                                           // 0x00135f04: addiu $s3, $v0, 0x37ec
    s6 = 0x22 << 16;                                            // 0x00135f08: lui $s6, 0x22
    s5 = s3 + -4;                                               // 0x00135f0c: addiu $s5, $s3, -4
    s0 = s1 << 4;                                               // 0x00135f10: sll $s0, $s1, 4
    /* nop */                                                   // 0x00135f14: nop 
label_0x135f18:
    s1 = s1 + 1;                                                // 0x00135f18: addiu $s1, $s1, 1
    a1 = s0 + s3;                                               // 0x00135f1c: addu $a1, $s0, $s3
    s0 = s0 + s5;                                               // 0x00135f20: addu $s0, $s0, $s5
    func_0010b2a0();  // 0x10b0e8                                // 0x00135f28: jal 0x10b0e8
    /* bnezl $v0, 0x135f74 */                                   // 0x00135f30: bnezl $v0, 0x135f74
    v0 = (s1 < 0x20) ? 1 : 0;                                   // 0x00135f34: slti $v0, $s1, 0x20
    s0 = *(int32_t*)(s0);                                       // 0x00135f38: lw $s0, 0($s0)
    if (s0 == 0) goto label_0x135f60;                           // 0x00135f3c: beqz $s0, 0x135f60
    a0 = &str_00224500;  // "cvFsGetSctLen #1:handle error"     // 0x00135f40: addiu $a0, $s6, 0x4500
    s0 = *(int32_t*)((s0) + 0xc);                               // 0x00135f44: lw $s0, 0xc($s0)
    /* beqzl $s0, 0x135f74 */                                   // 0x00135f48: beqzl $s0, 0x135f74
    v0 = (s1 < 0x20) ? 1 : 0;                                   // 0x00135f4c: slti $v0, $s1, 0x20
    /* call function at address in s0 */                        // 0x00135f50: jalr $s0
    /* nop */                                                   // 0x00135f54: nop 
    goto label_0x135f70;                                        // 0x00135f58: b 0x135f70
label_0x135f60:
    func_00134fb0();  // 0x134ec0                                // 0x00135f60: jal 0x134ec0
    /* nop */                                                   // 0x00135f64: nop 
    goto label_0x135f80;                                        // 0x00135f68: b 0x135f80
label_0x135f70:
    v0 = (s1 < 0x20) ? 1 : 0;                                   // 0x00135f70: slti $v0, $s1, 0x20
    if (v0 != 0) goto label_0x135f18;                           // 0x00135f74: bnez $v0, 0x135f18
    s0 = s1 << 4;                                               // 0x00135f78: sll $s0, $s1, 4
label_0x135f80:
    return;                                                     // 0x00135fa0: jr $ra
    sp = sp + 0x170;                                            // 0x00135fa4: addiu $sp, $sp, 0x170
}