void func_00175b10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00175b10: addiu $sp, $sp, -0x20
    func_00175bb8();  // 0x175b80                                // 0x00175b24: jal 0x175b80
    s1 = s0 + 0xcc0;                                            // 0x00175b28: addiu $s1, $s0, 0xcc0
    if (v0 == 0) goto label_0x175b48;                           // 0x00175b30: beqz $v0, 0x175b48
    v0 = *(int32_t*)((s1) + 0x264);                             // 0x00175b38: lw $v0, 0x264($s1)
    v1 = *(int32_t*)((s1) + 0x268);                             // 0x00175b3c: lw $v1, 0x268($s1)
    v0 = v0 + v1;                                               // 0x00175b40: addu $v0, $v0, $v1
    *(uint32_t*)((s1) + 0x264) = v0;                            // 0x00175b44: sw $v0, 0x264($s1)
label_0x175b48:
    func_00175be0();  // 0x175bb8                                // 0x00175b48: jal 0x175bb8
    /* nop */                                                   // 0x00175b4c: nop 
    if (v0 == 0) goto label_0x175b6c;                           // 0x00175b50: beqz $v0, 0x175b6c
    v0 = *(int32_t*)((s1) + 0x288);                             // 0x00175b58: lw $v0, 0x288($s1)
    v1 = *(int32_t*)((s1) + 0x268);                             // 0x00175b5c: lw $v1, 0x268($s1)
    v0 = v0 + v1;                                               // 0x00175b60: addu $v0, $v0, $v1
    *(uint32_t*)((s1) + 0x288) = v0;                            // 0x00175b64: sw $v0, 0x288($s1)
label_0x175b6c:
    return;                                                     // 0x00175b74: jr $ra
    sp = sp + 0x20;                                             // 0x00175b78: addiu $sp, $sp, 0x20
}